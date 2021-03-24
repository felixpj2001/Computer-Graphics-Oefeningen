#pragma once

#include <QKeyEvent>
#include <QMouseEvent>

class Navigation
{
public:
	Navigation();
	void processKeyEvent(QKeyEvent* e);
	void processMouseEvent(QMouseEvent* e);
	void lookAt();
private:
	double angle;

    double camPosx, camPosy, camPosz;
	double camUpx, camUpy, camUpz;
	double camViewx, camViewy, camViewz;
};

/*
https://community.khronos.org/t/3d-camera-movement/18501/8
*/