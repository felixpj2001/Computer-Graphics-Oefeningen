// RayTracer.cpp: implementation of the RayTracer class.
//
//////////////////////////////////////////////////////////////////////

#include "RayTracer.h"
#include <stdio.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------

RayTracer::RayTracer()
{
	m_ImageWidth = 0;
	m_ImageHeight = 0;

	m_UseMultipleRays = false;
}
//--------------------------------------------------------------------
RayTracer::RayTracer(cg_Canvas *canv)
{
	m_ImageWidth = 0;
	m_ImageHeight = 0;

	m_UseMultipleRays = false;

	canvas = canv;
}
//--------------------------------------------------------------------
RayTracer::~RayTracer()
{
}
//--------------------------------------------------------------------
void RayTracer::slotRender()
{
	TraceView();
}
//--------------------------------------------------------------------
void RayTracer::TraceView()
{
	printf("Tracing... ");
	for (int y = m_ImageHalfHeight; y > -m_ImageHalfHeight; y--)
	{
		for (int x = -m_ImageHalfWidth; x < m_ImageHalfWidth; x++)
		{
			if (m_UseMultipleRays)
			{
				// nog niet van toepassing
			}
			else
			{
				RGB_Color Pixelcolor = RGB_Color(0, 0, 0); //AANPASSEN!

				Ray *ray = new Ray{};
				GetFirstRay(ray, x, y);
				TraceRay(ray, &Pixelcolor);

				// kleur van de pixel doorgeven aan de canvas:
				canvas->PutPixel(x, y, Pixelcolor);
				// pixel onder de huidige positie rood kleuren om progress te tonen:
				if (y > -m_ImageHalfHeight + 1)
				{
					canvas->PutPixel(x, y - 1, RGB_Color(1.0f, 0.0f, 0.0f));
				}
			}
			// canvas->repaint(); //pixel per pixel update: SLOW
		}
		canvas->repaint(); //line per line update: MEDIUM SPEED
	}
	//canvas->repaint(); // update complete image once: FASTER
	printf("done.\n");
}
//--------------------------------------------------------------------
void RayTracer::slotSizeChanged(int NewW, int NewH)
{
	m_ImageWidth = NewW;
	m_ImageHeight = NewH;
	m_ImageHalfWidth = m_ImageWidth / 2;
	m_ImageHalfHeight = m_ImageHeight / 2;
}

//--------------------------------------------------------------------

void RayTracer::GetFirstRay(Ray *newRay, double XPos, double YPos)
{
	newRay->mOrigin = mSceneToTrace->eyePoint;
	newRay->mDirection = Vec3(XPos, YPos, -100);
	newRay->mDirection.Normalize();
}

void RayTracer::TraceRay(Ray *ray, RGB_Color *color)
{
	ReturnObject *returnedObject = new ReturnObject();
	Shape *shape = mSceneToTrace->shapelist.GetNearestIntersection(ray, returnedObject);
	if (shape)
	{
		AddAmbientComponent(color, shape);
		AddLightComponent(color, shape, returnedObject);
		color->RespectBoundaries();
	}
}

void RayTracer::AddAmbientComponent(RGB_Color *color, Shape *HitShape)
{
	color->r = mSceneToTrace->ambientIntensity.r * HitShape->m_Ka * HitShape->GetColor().r;
	color->g = mSceneToTrace->ambientIntensity.g * HitShape->m_Ka * HitShape->GetColor().g;
	color->b = mSceneToTrace->ambientIntensity.b * HitShape->m_Ka * HitShape->GetColor().b;
}

void RayTracer::AddLightComponent(RGB_Color *color, Shape *HitShape, ReturnObject *ReturnData)
{
	for (PointLight *pointLight : mSceneToTrace->pointLightList.pointLights)
	{
		Vec3 lightVector = ReturnData->mIntersectionPoint - pointLight->position;
		Vec3 viewVector = ReturnData->mIntersectionPoint - mSceneToTrace->eyePoint;
		lightVector.Normalize();
		viewVector.Normalize();
		float dotProduct = max(0.0f, ReturnData->mNormal * lightVector);
		float d = pointLight->position.DistanceTo(ReturnData->mIntersectionPoint);
		float att = min(1 / (pointLight->c1 + (pointLight->c2 * d) + (pointLight->c3 * d * d)), 1.0f);
		Vec3 reflecitionVector = GetReflectedVector(lightVector, ReturnData->mNormal);
		float dotReflect = max(0.0f, reflecitionVector * viewVector);
		color->r += att * pointLight->color.r * ((HitShape->m_Kd * HitShape->GetColor().r * dotProduct) + (HitShape->m_Ks * HitShape->m_SpecularColor.r * pow(dotReflect, HitShape->m_HotSpotExponent)));
		color->g += att * pointLight->color.g * ((HitShape->m_Kd * HitShape->GetColor().g * dotProduct) + (HitShape->m_Ks * HitShape->m_SpecularColor.g * pow(dotReflect, HitShape->m_HotSpotExponent)));
		color->b += att * pointLight->color.b * ((HitShape->m_Kd * HitShape->GetColor().b * dotProduct) + (HitShape->m_Ks * HitShape->m_SpecularColor.b * pow(dotReflect, HitShape->m_HotSpotExponent)));
	}
}

bool RayTracer::InShadow(Vec3 TestPoint, Vec3 LightVector, double LightDistance)
{
	return false;
}

Vec3 RayTracer::GetReflectedVector(Vec3 vector, Vec3 ReflectionNormal)
{
	ReflectionNormal.Normalize();
	return vector - ReflectionNormal * 2 * (vector * ReflectionNormal);
}