#ifndef SCENE_H
#define SCENE_H

#include "ShapeList.h"
#include "pointLightList.h"
#include "Vec3.h"

class Scene
{
public:
    ~Scene();
    ShapeList shapelist;
    PointLightList pointLightList;
    Vec3 eyePoint{0, 0, 11};
};

#endif