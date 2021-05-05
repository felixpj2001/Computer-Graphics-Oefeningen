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

				Ray* ray = new Ray{};
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
	ReturnObject *returnedObject = new ReturnObject{};
	Shape *shape = mSceneToTrace->shapelist.GetNearestIntersection(ray, returnedObject);
	if (shape)
	{
		RGB_Color rgb = RGB_Color(shape->GetColor());
		color->SetRGB(rgb.r, rgb.g, rgb.b);
	}
}