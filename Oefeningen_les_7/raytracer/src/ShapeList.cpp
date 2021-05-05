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
	returnedObject = nullptr;
	for (Shape *shape : Shapes)
	{
		ReturnObject *r = new ReturnObject();
		shape->GetIntersection(ray, r);
		if (r->mIntersectionFound == true)
		{
			if (!returnedObject || r->mDistance < returnedObject->mDistance)
			{
				returnedObject = r;
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