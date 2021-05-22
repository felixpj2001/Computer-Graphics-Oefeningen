// ShapeList.cpp: implementation of the ShapeList class.
//
//////////////////////////////////////////////////////////////////////

#include "ShapeList.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------

ShapeList::ShapeList()
{
}

//--------------------------------------------------------------------

ShapeList::~ShapeList()
{
}

//--------------------------------------------------------------------

void ShapeList::AddShape(Shape *NewShape)
{
	Shapes.push_back(NewShape);
}

//--------------------------------------------------------------------

void ShapeList::DeleteAllShapes()
{
	Shape *CurrentShape = 0;
	for (ShapeIterator = Shapes.begin(); ShapeIterator != Shapes.end(); ShapeIterator++)
	{
		CurrentShape = *ShapeIterator;
		delete CurrentShape;
	}
	Shapes.erase(Shapes.begin(), Shapes.end());
}

//--------------------------------------------------------------------

int ShapeList::GetNrOfShapes()
{
	return Shapes.size();
}

//--------------------------------------------------------------------

Shape *ShapeList::GetNearestIntersection(Ray *ray, ReturnObject *returnedObject)
{
	Shape *closest = nullptr;
	for (Shape *shape : Shapes)
	{
		ReturnObject *r = new ReturnObject();
		shape->GetIntersection(ray, r);
		if (r->mIntersectionFound == true)
		{
			if (returnedObject->mIntersectionFound == false || r->mDistance < returnedObject->mDistance)
			{
				returnedObject->mDistance = r->mDistance;
				returnedObject->mIntersectionFound = r->mIntersectionFound;
				returnedObject->mIntersectionPoint = r->mIntersectionPoint;
				returnedObject->mNormal = r->mNormal;
				closest = shape;
			}
			else
			{
				delete r;
			}
		}
	}
	return closest;
}