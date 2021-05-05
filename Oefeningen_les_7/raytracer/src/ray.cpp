#include "ray.h"

void Ray::setOrigin(double x, double y, double z)
{
    mOrigin.SetXYZ(x, y, z);
}

void Ray::setDirection(double x, double y, double z)
{
    mDirection.SetXYZ(x, y, z);
    mDirection.Normalize();
}