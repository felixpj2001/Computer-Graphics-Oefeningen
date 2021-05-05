#ifndef POINTLIGHT_H
#define POINTLIGHT_H

#include "Vec3.h"
#include "RGB_Color.h"

class PointLight
{
public:
    Vec3 position;
    RGB_Color color;
};

#endif