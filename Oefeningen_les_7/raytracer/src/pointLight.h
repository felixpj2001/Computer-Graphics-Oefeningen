#ifndef POINTLIGHT_H
#define POINTLIGHT_H

#include "Vec3.h"
#include "RGB_Color.h"

class PointLight
{
public:
    Vec3 position;
    RGB_Color color;
    float c1 = 0.0001;
    float c2 = 0.00001;
    float c3 = 0.000001;
};

#endif