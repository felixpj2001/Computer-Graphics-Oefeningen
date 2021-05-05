#ifndef RAY_H
#define RAY_H

#include "Vec3.h"

class Ray
{
public:
    void setOrigin(double x, double y, double z);
    void setDirection(double x, double y, double z);
    Vec3 mOrigin;
    Vec3 mDirection;
};

#endif // RAY_H