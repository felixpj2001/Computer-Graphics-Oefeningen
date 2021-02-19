// G1_DrawTool.cpp: implementation of the CG1_DrawTool class.
//
//////////////////////////////////////////////////////////////////////

#include "CG1_DrawTool.h"
#include "CG1_2DVector.h"
#include "CG1_EdgeTable.h"
#include "CG1_ActiveEdgeTable.h"
#include <stdio.h>
#include <QDebug>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------

CG1_DrawTool::CG1_DrawTool()
{
}

//--------------------------------------------------------------------

CG1_DrawTool::~CG1_DrawTool()
{
	
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawData()
{
	// HIER KAN JE AANGEVEN WAT GETEKEND MOET WORDEN
	// (= FUNCTIES AANROEPEN DIE BEPAALDE DINGEN TEKENEN )

	// VOORBEELDEN:
    //DrawDDALineV2(CG1_Line(10,10,50,100), RGB_Color(1.0,0.0,0.0));
    //DrawMidPointLineV2(CG1_Line(-10,-10,50,-100), RGB_Color(0.0,1.0,0.0));
    //DrawMidPointCircle(10,10, 50, RGB_Color(0.0,0.0,1.0));
	//DrawSecondOrderMidPointCircle(-10,10, 50, RGB_Color(0.0,1.0,0.0));
	
    CG1_Polygon MyPolygon;
    MyPolygon.AddPoint(CG1_2DVector(55.0, 50.0));
    MyPolygon.AddPoint(CG1_2DVector(100.0, 15.0));
    MyPolygon.AddPoint(CG1_2DVector(25.0, -5.0));
    MyPolygon.AddPoint(CG1_2DVector(20.0, 5.0));
    MyPolygon.AddPoint(CG1_2DVector(-10.0, -5.0));

    FillPolygon(&MyPolygon, RGB_Color(0.0,1.0,1.0));
    emit UpdateWindow();
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawDDALineV1(CG1_Line Line, RGB_Color color)
{
    // ZELF IMPLEMENTEREN
    int x0 = Line.X0();
    int y0 = Line.Y0();
    int x1 = Line.X1();
    int y1 = Line.Y1();

    float m = (y1 - y0) / (x1 - x0);
    float y = y0;
    for (int x = x0; x <= x1; x++)
    {
        emit PutPixel(x, (int) floor(y + 0.5f), color);
        y += m;
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawDDALineV2(CG1_Line Line, RGB_Color color)
{
    // ZELF IMPLEMENTEREN
    int x0 = Line.X0();
    int y0 = Line.Y0();
    int x1 = Line.X1();
    int y1 = Line.Y1();

    float x, y, dx, dy, steps;

      dx = (x1 - x0);
      dy = (y1 - y0);

      if(abs(dx) >= abs(dy))
          steps = abs(dx);
      else
          steps = abs(dy);

      dx = dx/steps;
      dy = dy/steps;

      x = x0;
      y = y0;
      for (int i = 0; i <= steps; ++i)
      {
        emit PutPixel(x, y, color);
        x += dx;
        y += dy;

      }
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawMidPointLineV1(CG1_Line Line, RGB_Color color)
{
    int x0 = Line.X0();
    int y0 = Line.Y0();
    int x1 = Line.X1();
    int y1 = Line.Y1();

    int dx = x1 - x0;
    int dy = y1 - y0;
    int d = (dy * 2) - dx;
    int incrE = dy * 2;
    int incrNE = (dy - dx) * 2;
    int x = x0;
    int y = y0;
    emit PutPixel(x, y, color);
    while (x < x1)
    {
        if (d <= 0)
        {
            d += incrE;
        }
        else
        {
            d += incrNE;
            y++;
        }
        x++;
        emit PutPixel(x, y, color);
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawMidPointLineV2(CG1_Line Line, RGB_Color color)
{
    int x0 = Line.X0();
    int y0 = Line.Y0();
    int x1 = Line.X1();
    int y1 = Line.Y1();

    if (abs(y1 - y0) < abs(x1 - x0))
    {
        if (x0 > x1)
        {
            plotLineHulpLow(x1, y1, x0, y0, color);
        }
        else
        {
            plotLineHulpLow(x0, y0, x1, y1, color);
        }
    }
    else
    {
        if (y0 > y1)
        {
            plotLineHulpHigh(x1, y1, x0, y0, color);
        }
        else
        {
            plotLineHulpHigh(x0, y0, x1, y1, color);
        }
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::plotLineHulpLow(int x0, int y0, int x1, int y1, RGB_Color color)
{
    int dx = x1 - x0;
    int dy = y1 - y0;
    int yi = 1;
    if (dy < 0)
    {
        yi = -1;
        dy = -dy;
    }
    int d = (2 * dy) - dx;
    int y = y0;
    for (int x = x0; x < x1; ++x)
    {
        emit PutPixel(x, y, color);
        if (d > 0) {
            y = y + yi;
            d = d + (2 * (dy - dx));
        }
        else
        {
            d = d + 2*dy;
        }
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::plotLineHulpHigh(int x0, int y0, int x1, int y1, RGB_Color color)
{
    int dx = x1 - x0;
    int dy = y1 - y0;
    int xi = 1;
    if (dx < 0)
    {
        xi = -1;
        dx = -dx;
    }
    int d = (2 * dx) - dy;
    int x = x0;
    for (int y = y0; y < y1; ++y)
    {
        emit PutPixel(x, y, color);
        if (d > 0) {
            x = x + xi;
            d = d + (2 * (dx - dy));
        }
        else
        {
            d = d + 2*dx;
        }
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawAllCirclePoints(int Midx, int Midy, int x, int y, RGB_Color color)
{
    emit PutPixel( Midx + x , Midy + y , color);
    emit PutPixel( Midx + y , Midy + x , color);
    emit PutPixel( Midx + y , Midy + -x, color);
    emit PutPixel( Midx + x , Midy + -y, color);
    emit PutPixel( Midx + -x, Midy + -y, color);
    emit PutPixel( Midx + -y, Midy + -x, color);
    emit PutPixel( Midx + -y, Midy + x , color);
    emit PutPixel( Midx + -x, Midy + y , color);
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawMidPointCircle(int Midx, int Midy, int radius, RGB_Color color)
{
    int x = 0;
    int y = radius;
    int d = 1 - radius;
    DrawAllCirclePoints(Midx, Midy, x, y, color);
    while (y > x)
    {
        if (d < 0)
        {
            d += (x * 2) + 3;
        }
        else
        {
            d += (x - y) * 2 + 5;
            y--;
        }
        x++;
        DrawAllCirclePoints(Midx, Midy, x, y, color);
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawSecondOrderMidPointCircle(int Midx, int Midy, int radius, RGB_Color color)
{
    // ?
}

//--------------------------------------------------------------------

void CG1_DrawTool::FillPolygon(CG1_Polygon *Polygon, RGB_Color color)
{
	if(Polygon->GetSize() > 0)
	{
		int MinimumY = Polygon->GetLowestY();
		int MaximumY = Polygon->GetHighestY();
		CG1_EdgeTable ET;
		CG1_ActiveEdgeTable AET;
		// ZELF VERDER IMPLEMENTEREN
        ET.Initialize(Polygon);
        int y = MinimumY;
        while ((ET.EdgeTableRows.size() > 0 || AET.ActiveEdges.size() > 0) && y <= MaximumY)
        {
            CG1_EdgeTableRow* etr = ET.GetEdgeTableRow(y);
            AET.Add(etr);
            // Draw
            for(AET.ActiveEdgeIterator = AET.ActiveEdges.begin(); AET.ActiveEdgeIterator != AET.ActiveEdges.end(); )
            {
                CG1_Edge* first = *AET.ActiveEdgeIterator;
                AET.ActiveEdgeIterator++;
                CG1_Edge* second = *AET.ActiveEdgeIterator;
                AET.ActiveEdgeIterator++;
                DrawDDALineV2(CG1_Line((int)first->Current_X, y, (int)second->Current_X, y), color);
            }
            // Update
            y++;
            AET.RemoveObsoleteEdges(y);
            AET.Update_CurrentX_Values();
        }
	}
}

//--------------------------------------------------------------------
