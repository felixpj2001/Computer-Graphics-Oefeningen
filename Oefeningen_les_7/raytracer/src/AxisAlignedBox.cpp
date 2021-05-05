#include "AxisAlignedBox.h"

void AxisAlignedBox::SetCorners(Vec3 leftLowerBack, Vec3 rightUpperFront)
{
    m_Xmin = leftLowerBack.x;
    m_Xmax = rightUpperFront.x;

    m_Ymin = leftLowerBack.y;
    m_Ymax = rightUpperFront.y;

    m_Zmin = leftLowerBack.z;
    m_Zmax = rightUpperFront.z;
}

void AxisAlignedBox::GetIntersection(Ray* ray, ReturnObject* returnedObject)
{
    
}