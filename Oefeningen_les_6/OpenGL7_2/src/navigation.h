#pragma once

#include <QKeyEvent>

class Navigation
{
public:
	Navigation();
	void processEvent(QKeyEvent* e);
	void lookAt();
private:
	double angle;

    double camPosx, camPosy, camPosz;
	double camUpx, camUpy, camUpz;
	double camViewx, camViewy, camViewz;
};