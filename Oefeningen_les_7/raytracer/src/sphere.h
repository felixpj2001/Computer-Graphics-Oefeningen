#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"

class Sphere : public Shape
{
public:
    Sphere();
    ~Sphere();
    void GetIntersection(Ray *ray, ReturnObject *returnedObject) override;
    double radius;
};

#endif