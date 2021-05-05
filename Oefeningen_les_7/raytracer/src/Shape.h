// Shape.h: interface for the Shape class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SHAPE_H__C940BC4B_0929_492E_9A24_EDB049FB10B6__INCLUDED_)
#define AFX_SHAPE_H__C940BC4B_0929_492E_9A24_EDB049FB10B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Vec3.h"
#include <math.h>
#include "RGB_Color.h"
#include "ray.h"
#include "returnObject.h"

class Shape
{
public:
    void SetColor(RGB_Color color);
    void SetPosition(Vec3 position);
    void SetUpVector(Vec3 Up);
    void SetVectors(Vec3 X, Vec3 Y, Vec3 Z);
    RGB_Color GetColor();

    // constructor & destructor
    Shape();
    virtual ~Shape();

    virtual void GetIntersection(Ray *ray, ReturnObject *returnedObject) = 0;

protected:
    Vec3 m_Position;
    Vec3 m_XVec;
    Vec3 m_YVec;
    Vec3 m_ZVec;
    RGB_Color m_Color;
};

#endif // !defined(AFX_SHAPE_H__C940BC4B_0929_492E_9A24_EDB049FB10B6__INCLUDED_)
