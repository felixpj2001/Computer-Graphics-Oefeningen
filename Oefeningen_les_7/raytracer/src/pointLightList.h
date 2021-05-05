#ifndef POINTLIGHTLIST_H
#define POINTLIGHTLIST_H

#include <vector>
#include "pointLight.h"

class PointLightList
{
public:
    std::vector<PointLight *> pointLights;
    void DeleteAllLights()
    {
        PointLight *currentLight = nullptr;
        for (auto iterator = pointLights.begin(); iterator != pointLights.end(); iterator++)
        {
            currentLight = *iterator;
            delete currentLight;
        }
        pointLights.erase(pointLights.begin(), pointLights.end());
    }
};

#endif