#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <math.h>

#include "navigation.h"

Navigation::Navigation()
{
    angle = 0;
    camPosx = 0.0, camPosy = 5.0, camPosz = 25.0;
	camViewx = 0.0, camViewy = 5.0, camViewz = 0.0;
	camUpx = 0.0, camUpy = 1.0, camUpz = 0.0;
}

void Navigation::processKeyEvent(QKeyEvent* e)
{
    double speed = 0.5;
    if (e->key() == Qt::Key_Z)
    {
        camPosx += sin(angle) * speed;
        camPosz -= cos(angle) * speed;

        camViewx += sin(angle) * speed;
        camViewz -= cos(angle) * speed;
    }

    if (e->key() == Qt::Key_S)
    {
        camPosx -= sin(angle) * speed;
        camPosz += cos(angle) * speed;

        camViewx -= sin(angle) * speed;
        camViewz += cos(angle) * speed;
    }

    if (e->key() == Qt::Key_D)
    {
        camPosx += sin(angle + M_PI/2) * speed;
        camPosz -= cos(angle + M_PI/2) * speed;

        camViewx += sin(angle + M_PI/2) * speed;
        camViewz -= cos(angle + M_PI/2) * speed;
    }

    if (e->key() == Qt::Key_Q)
    {
        camPosx -= sin(angle + M_PI/2) * speed;
        camPosz += cos(angle + M_PI/2) * speed;

        camViewx -= sin(angle + M_PI/2) * speed;
        camViewz += cos(angle + M_PI/2) * speed;
    }

    if (e->key() == Qt::Key_Left)
    {
        angle -= 0.05;
        camViewx = sin(angle) + camPosx;
        camViewz = -cos(angle) + camPosz;
    }

    if (e->key() == Qt::Key_Right)
    {
        angle += 0.05;
        camViewx = sin(angle) + camPosx;
        camViewz = -cos(angle) + camPosz;
    }

    if (e->key() == Qt::Key_Up)
    {
        camPosy += speed;
        camViewy += speed;
    }

    if (e->key() == Qt::Key_Down)
    {
        camPosy -= speed;
        camViewy -= speed;
    }
}

void Navigation::processMouseEvent(QMouseEvent* e)
{
    // Do stuff
}

void Navigation::lookAt()
{
    gluLookAt(camPosx, camPosy, camPosz,
			  camViewx, camViewy, camViewz,
			  camUpx, camUpy, camUpz);
}