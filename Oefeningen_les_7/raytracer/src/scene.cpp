#include "scene.h"

Scene::~Scene()
{
    shapelist.DeleteAllShapes();
    pointLightList.DeleteAllLights();
}