#include "CG1_DrawTool.h"
#include "CG1_2DPolygon.h"
#include "CG1_2DVector.h"
#include "CG1_EdgeTable.h"
#include "CG1_ActiveEdgeTable.h"
#include <stdio.h>

//--------------------------------------------------------------------

CG1_DrawTool::CG1_DrawTool()
{
	Increment  = 120;
    ClipLeft   = -Increment;
    ClipRight  = Increment;
    ClipTop    = Increment;
    ClipBottom = -Increment;
}

//--------------------------------------------------------------------

CG1_DrawTool::~CG1_DrawTool()
{
	
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawData()
{
	canvas->clear();

	DrawClipRectangle(RGB_Color(0.0, 0.0, 0.0));

	// HIER KAN JE AANGEVEN WAT GETEKEND MOET WORDEN
	// (= FUNCTIES AANROEPEN DIE BEPAALDE DINGEN TEKENEN )

	// VOORBEELDEN:
	// CG1_Line line;
	// line.SetData(10,10,50,100);
	// if(CohenSutherLandClip(&line))
	// {
	// 	DrawDDALine(line, RGB_Color(1.0,0.0,0.0));
	// }
	//DrawMidPointLine(CG1_Line(-10,-10,-50,100), RGB_Color(1.0,1.0,0.0));
	//DrawMidPointCircle(10,10, 50, RGB_Color(0.0,0.0,1.0));
	//DrawSecondOrderMidPointCircle(-10,10, 50, RGB_Color(0.0,1.0,0.0));
	
	CG1_2DPolygon MyPolygon;
	MyPolygon.AddPoint(CG1_2DVector(55.0, 50.0));
	MyPolygon.AddPoint(CG1_2DVector(100.0, 15.0));
	MyPolygon.AddPoint(CG1_2DVector(25.0, -5.0));
	MyPolygon.AddPoint(CG1_2DVector(20.0, 5.0));
	MyPolygon.AddPoint(CG1_2DVector(-10.0, -5.0));
	SutherlandHodgemanPolygonClip(&MyPolygon);
	DrawPolygon(&MyPolygon, RGB_Color(1.0, 0.0, 0.0));
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawClipRectangle(RGB_Color color)
{
	DrawDDALine(CG1_Line(ClipLeft , ClipTop   , ClipRight, ClipTop)   , color);
	DrawDDALine(CG1_Line(ClipRight, ClipTop   , ClipRight, ClipBottom), color);
	DrawDDALine(CG1_Line(ClipRight, ClipBottom, ClipLeft , ClipBottom), color);
	DrawDDALine(CG1_Line(ClipLeft , ClipBottom, ClipLeft , ClipTop)   , color);
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawDDALine(CG1_Line Line, RGB_Color color)
{
	int x0 = Line.X0();
	int y0 = Line.Y0();
	int x1 = Line.X1();
	int y1 = Line.Y1();

	float dy, dx, m, x, y;

	dy = (float)(y1 - y0);
	dx = (float)(x1 - x0);
	m = dy / dx;

	if( m >= -1 && m <= 1)
	{
		//rc (m) tussen -1 en 1

		// delta == 1  => steeds van links naar rechts
		if(x0 > x1)
		{
			int temp;
			temp = x1;
			x1 = x0;
			x0 = temp;

			temp = y1;
			y1 = y0;
			y0 = temp;
		}


		y = (float)y0;
		for (x=(float)x0; x<=x1; x++)
		{
			canvas->putPixel((int)x, (int)(y + 0.5), color);
			y += m;
		}

	}
	else
	{
		// delta == 1  => steeds van onder naar boven

		if(y0 > y1)
		{
			int temp;
			temp = x1;
			x1 = x0;
			x0 = temp;

			temp = y1;
			y1 = y0;
			y0 = temp;
		}

		m = dx / dy;
		x = (float)x0;
		for (y=(float)y0; y<=y1; y++)
		{
			canvas->putPixel((int)(x + 0.5), (int)y, color);
			x += m;
		}
	}
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawMidPointLine(CG1_Line Line, RGB_Color color)
{

}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawMidPointCircle(int Midx, int Midy, int radius, RGB_Color color)
{

}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawSecondOrderMidPointCircle(int Midx, int Midy, int radius, RGB_Color color)
{

}


//--------------------------------------------------------------------

void CG1_DrawTool::ClipUp()
{
    Increment += 2;
    ClipLeft = -Increment;
    ClipRight = Increment;
    ClipTop = Increment;
    ClipBottom = -Increment;

	DrawData();
}

//--------------------------------------------------------------------

void CG1_DrawTool::ClipDown()
{
    if(Increment > 5)
    {
		Increment -= 2;
		ClipLeft = -Increment;
		ClipRight = Increment;
		ClipTop = Increment;
		ClipBottom = -Increment;

		DrawData();
    }
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawAllCirclePoints(int Midx, int Midy, int x, int y, RGB_Color color)
{
	canvas->putPixel( Midx + x , Midy + y , color);
	canvas->putPixel( Midx + y , Midy + x , color);
	canvas->putPixel( Midx + y , Midy + -x, color);
	canvas->putPixel( Midx + x , Midy + -y, color);
	canvas->putPixel( Midx + -x, Midy + -y, color);
	canvas->putPixel( Midx + -y, Midy + -x, color);
	canvas->putPixel( Midx + -y, Midy + x , color);
	canvas->putPixel( Midx + -x, Midy + y , color);
}

//--------------------------------------------------------------------

void CG1_DrawTool::FillPolygon(CG1_2DPolygon  *Polygon, RGB_Color color)
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
                DrawDDALine(CG1_Line((int)first->Current_X, y, (int)second->Current_X, y), color);
            }
            // Update
            y++;
            AET.RemoveObsoleteEdges(y);
            AET.Update_CurrentX_Values();
        }
	}
}

//--------------------------------------------------------------------

//--------------------------------------------------------------------

CG1_OutCode CG1_DrawTool::CompOutCode(float x, float y)
{
    CG1_OutCode code;
    
    code.all = 0;
    //all: 4 bits ->     top = 8   ---   bottom = 4   ---   right = 2   ---   left = 1
    code.top = 0;
    code.bottom = 0;
    code.left = 0;
    code.right = 0;
    
    
    if(y > ClipTop)
    {
	code.top = 1;
	code.all += 8;	// eerste bit aanzetten
    }
    else if(y < ClipBottom)
    {
	code.bottom = 1;
	code.all += 4;	// tweede bit aanzetten
    }
    
    
    if(x > ClipRight)
    {
	code.right = 1;
	code.all += 2;	// derde bit aanzetten
    }
    else if(x < ClipLeft)
    {
	code.left = 1;
	code.all += 1;	// vierde bit aanzetten
    }
    
    
    return code;
}

//--------------------------------------------------------------------

bool CG1_DrawTool::CohenSutherLandClip(CG1_Line* Line)
{
	float x0 = (float)Line->X0();
	float y0 = (float)Line->Y0();
	float x1 = (float)Line->X1();
	float y1 = (float)Line->Y1();

	CG1_OutCode c1 = CompOutCode(x0, y0);
	CG1_OutCode c2 = CompOutCode(x1, y1);

	bool done = false;
	bool accept = false;

	do
	{
		if ((c1.all | c2.all) == 0)
		{
			accept = true;
			done = true;
		}
		else if ((c1.all & c2.all) != 0)
		{
			accept = false;
			done = true;
		}
		else
		{
			CG1_OutCode out = (c1.all != 0) ? c1 : c2;
			float x, y;
			// Find intersection point; 
            // using formulas y = y1 + slope * (x - x1), 
            // x = x1 + (1 / slope) * (y - y1) 
			if (out.all & 8)
			{
				x = x0 + (x1 - x0) * (ClipTop - y0) / (y1 - y0);
				y = ClipTop;
			}
			else if (out.all & 4)
			{
				x = x0 + (x1 - x0) * (ClipBottom - y0) / (y1 - y0); 
                y = ClipBottom;
			}
			else if (out.all & 2)
			{
				y = y0 + (y1 - y0) * (ClipRight - x0) / (x1 - x0); 
                x = ClipRight;
			}
			else if (out.all & 1)
			{
				y = y0 + (y1 - y0) * (ClipLeft - x0) / (x1 - x0); 
                x = ClipLeft; 
			}

			if (out.all == c1.all)
			{
				x0 = x;
				y0 = y;
				c1 = CompOutCode(x0, y0);
			}
			else
			{
				x1 = x;
				y1 = y;
				c2 = CompOutCode(x1, y1);
			}
		}
	}
	while (!done);
	Line->SetData(x0, y0, x1, y1);

	return accept;
}

//--------------------------------------------------------------------

bool CG1_DrawTool::CyrusBeckClip(CG1_Line* Line)
{
	float x0 = (float)Line->X0();
	float y0 = (float)Line->Y0();
	float x1 = (float)Line->X1();
	float y1 = (float)Line->Y1();

	CG1_2DVector P0, P1, D;
	P0.SetXY(x0, y0);
	P1.SetXY(x1, y1);
	D.SetXY(x1 - x0, y1 - y0);	

	CG1_OutCode OutCode0, OutCode1;
	float tE, tL, t, NiDotD;
	CG1_2DVector Ni, Pei, P0_Pei;

	OutCode0 = CompOutCode(x0, y0);
	OutCode1 = CompOutCode(x1, y1);

	if((OutCode0.all | OutCode1.all) == 0)					//triviaal aanvaard
	{
		Line->SetData(x0, y0, x1, y1);
		return true;
	}
	else if((OutCode0.all & OutCode1.all) != 0)					//triviaal geweigerd
	{
		return false;
	}
	else	//doe Cyrus-Beck
	{
		if(x0 - x1 <= 0.001 && x0 - x1 >= -0.001 && y0 - y1 <= 0.001 && y0 - y1 >= -0.001)
		{
			//begin- en eindpunt zijn gelijk
			return false;
		}
		else
		{

			tE = 0;
			tL = 1;

			for(int i=0; i<4; i++)		// vier kanten:		0 = onder | 1 = rechts | 2 = boven | 3 = links
			{
				switch(i)
				{
				case 0:	// onder
					{
						Ni.SetXY(0.0f, -1.0f);
						Pei.SetXY(ClipLeft, ClipBottom);
						break;
					}
				case 1:	// rechts
					{
						Ni.SetXY(1.0f, 0.0f);
						Pei.SetXY(ClipRight, ClipBottom);
						break;
					}
				case 2:	// boven
					{
						Ni.SetXY(0.0f, 1.0f);
						Pei.SetXY(ClipRight, ClipTop);
						break;
					}	
				case 3:	// links
					{
						Ni.SetXY(-1.0f, 0.0f);
						Pei.SetXY(ClipLeft, ClipTop);
						break;
					}
				}

				NiDotD = Ni * D;

				if(NiDotD != 0)						// anders loopt ze parallell met de edge
				{
					P0_Pei.SetXY( (P0.GetX() - Pei.GetX()), (P0.GetY() - Pei.GetY()) );

					// t berekenen:		t = (Ni * [P0 - Pei]) / (-Ni * D)
					t = (Ni * P0_Pei) / (-Ni * D);

					if(NiDotD > 0)	// => PL
					{
						if(t < tL)
							tL = t;
					}
					else			// => PE
					{
						if(t > tE)
							tE = t;
					}
				}

			}

			if(tE < tL)
			{
				// draw the line
				CG1_2DVector PtE, PtL;
				PtE.SetXY( ( P0.GetX() + (tE * D.GetX()) ), ( P0.GetY() + (tE * D.GetY()) ) );
				PtL.SetXY( ( P0.GetX() + (tL * D.GetX()) ), ( P0.GetY() + (tL * D.GetY()) ) );

				Line->SetData((int)PtE.GetX(), (int)PtE.GetY(), (int)PtL.GetX(), (int)PtL.GetY());
				return true;
			}
			else
			{
				return false;
			}

		}

	}

	//return 0;
}

//--------------------------------------------------------------------

void CG1_DrawTool::DrawPolygon(CG1_2DPolygon *Polygon, RGB_Color color)
{
    int NrOfPoints = Polygon->GetSize();
    CG1_2DVector FirstPoint;
    CG1_2DVector SecondPoint;
    FirstPoint = Polygon->GetPoint(0);
    for (int i = 1; i < NrOfPoints; i++)
    {
		SecondPoint = Polygon->GetPoint(i);
		CG1_Line CurrentEdge;
		CurrentEdge.SetData(FirstPoint.GetX(), FirstPoint.GetY(), SecondPoint.GetX(), SecondPoint.GetY());
		DrawDDALine(CurrentEdge, color);
		FirstPoint = SecondPoint;
    }
    SecondPoint = Polygon->GetPoint(0);
    CG1_Line CurrentEdge;
    CurrentEdge.SetData(FirstPoint.GetX(), FirstPoint.GetY(), SecondPoint.GetX(), SecondPoint.GetY());
    DrawDDALine(CurrentEdge, color);
}

//--------------------------------------------------------------------

void CG1_DrawTool::SutherlandHodgemanPolygonClip(CG1_2DPolygon *Polygon)
{
    CG1_2DPolygon NewPolygon;
	for (int i = 0; i < 4; i++)		// vier kanten:		0 = onder | 1 = rechts | 2 = boven | 3 = links
	{
		int value;
		switch(i)
		{
		case 0:	// onder
			{
				value = ClipBottom;
				break;
			}
		case 1:	// rechts
			{
				value = ClipRight;
				break;
			}
		case 2:	// boven
			{
				value = ClipTop;
				break;
			}	
		case 3:	// links
			{
				value = ClipLeft;
				break;
			}
		}
		CG1_2DVector firstPoint = Polygon->GetPoint(Polygon->GetSize() - 1);
		for (int j = 0; j < Polygon->GetSize(); ++j)
		{
			CG1_2DVector secondPoint = Polygon->GetPoint(j);
			if (Inside(firstPoint, i, value) && Inside(secondPoint, i, value))
			{
				NewPolygon.AddPoint(secondPoint);
			}
			else if (!Inside(firstPoint, i, value) && Inside(secondPoint, i, value))
			{
				CG1_2DVector punt = GetIntersection(firstPoint, secondPoint, i, value);
				NewPolygon.AddPoint(punt);
				NewPolygon.AddPoint(secondPoint);
			}
			else if (!Inside(secondPoint, i, value) && Inside(firstPoint, i, value))
			{
				CG1_2DVector punt = GetIntersection(firstPoint, secondPoint, i, value);
				NewPolygon.AddPoint(punt);
			}
			else
			{
				// Nothing
			}
			firstPoint = secondPoint;
		}
		*Polygon = NewPolygon;
		NewPolygon.Clear();
	}
}

//--------------------------------------------------------------------

bool CG1_DrawTool::Inside(CG1_2DVector point, int EdgeNr, int value)
{
    switch(EdgeNr)
    {
	case 0:						// onder
	{
	    if(point.GetY() > value)
		return true;
	    else
		return false;
	    break;
	}
	case 1:						// rechts
	{
	    if(point.GetX() < value)
		return true;
	    else
		return false;
	    break;
	}
	case 2:						// boven 
	{
	    if(point.GetY() < value)
		return true;
	    else
		return false;
	    break;
	}
	case 3:						// links
	{
	    if(point.GetX() > value)
		return true;
	    else
		return false;
	    break;
	}
	default:
	{
	    return false;
	    break;
	}
    }
}

//--------------------------------------------------------------------

CG1_2DVector CG1_DrawTool::GetIntersection(CG1_2DVector first, CG1_2DVector second, int EdgeNr, int Value)
{
    float x0 = first.GetX();
    float y0 = first.GetY();
    float x1 = second.GetX();
    float y1 = second.GetY();
    
    float x = 0.0f;
    float y = 0.0f;
    
    if(EdgeNr == 0)							// intersectie met onderkant berekenen
    {
	x = x0 + ((x1 - x0) * ((Value - y0) / (y1 - y0)));
	y = Value;
    }
    else if(EdgeNr == 1)						// intersectie met rechterkant berekenen
    {
	y = y0 + ((y1 - y0) * ((Value - x0) / (x1 - x0)));
	x = Value;
    }
    else if(EdgeNr == 2)						// intersectie met bovenkant berekenen
    {
	x = x0 + ((x1 - x0) * ((Value - y0) / (y1 - y0)));
	y = Value;
    }
    else if(EdgeNr == 3)						// intersectie met linkerkant berekenen
    {
	y = y0 + ((y1 - y0) * ((Value - x0) / (x1 - x0)));
	x = Value;
    }
    
    CG1_2DVector ReturnVector;
    ReturnVector.SetXY(x, y);
    
    return ReturnVector;
}
