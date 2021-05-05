#ifndef AXISALIGNEDBOX_H
#define AXISALIGNEDBOX_H

#include "Shape.h"
#include "Vec3.h"
#include "ray.h"
#include "returnObject.h"

class AxisAlignedBox : public Shape
{
public:
    void SetCorners(Vec3 leftLowerBack, Vec3 rightUpperFront);
    float m_Xmin;
    float m_Xmax;
    float m_Ymin;
    float m_Ymax;
    float m_Zmin;
    float m_Zmax;

    void GetIntersection(Ray* ray, ReturnObject* returnedObject);
};

#endif