#include "CG1_Edge.h"

//--------------------------------------------------------------------

CG1_Edge::CG1_Edge()
{

}

//--------------------------------------------------------------------

CG1_Edge::~CG1_Edge()
{

}

//--------------------------------------------------------------------

void CG1_Edge::SetData(int x0, int y0, int x1, int y1)
{
	if (y0 < y1)
	{
		x_down = x0;
		y_down = y0;
		x_up = x1;
		y_up = y1;
	}
	else
	{
		x_down = x1;
		y_down = y1;
		x_up = x0;
		y_up = y0;
	}
	
	Reversed_M = (x_up - x_down) / (float)(y_up - y_down);	//van onder naar boven
}

//--------------------------------------------------------------------