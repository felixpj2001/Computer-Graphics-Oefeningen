#ifndef RETURNOBJECT_H
#define RETURNOBJECT_H

#include "Vec3.h"

class ReturnObject
{
public:
    bool mIntersectionFound;
    Vec3 mNormal;
    Vec3 mIntersectionPoint;
    double mDistance;
};

#endif