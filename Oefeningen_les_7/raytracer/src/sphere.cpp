#include "sphere.h"

Sphere::Sphere()
{
}

Sphere::~Sphere()
{
}

void Sphere::GetIntersection(Ray *ray, ReturnObject *returnedObject)
{
    double a = ray->mDirection * ray->mDirection;
    double bs = ray->mDirection * (ray->mOrigin - this->m_Position);
    double b = 2 * bs;
    double c = ((ray->mOrigin - this->m_Position) * (ray->mOrigin - this->m_Position)) - (this->radius * this->radius);

    double D = (bs * bs) - c;
    if (D < 0)
    {
        returnedObject->mIntersectionFound = false;
    }
    else
    {
        float t0 = -bs - sqrt((bs * bs) - c);
        float t1 = -bs + sqrt((bs * bs) - c);

        float t;
        if (t0 > 0)
        {
            t = t0;
            returnedObject->mIntersectionFound = true;
        }
        else if (t1 > 0)
        {
            t = t1;
            returnedObject->mIntersectionFound = true;
        }
        else
        {
            returnedObject->mIntersectionFound = false;
        }
        if (returnedObject->mIntersectionFound)
        {
            returnedObject->mIntersectionPoint = ray->mDirection * t;
            returnedObject->mNormal = returnedObject->mIntersectionPoint;
            returnedObject->mNormal.Normalize();
            returnedObject->mDistance = t;
        }
    }
}