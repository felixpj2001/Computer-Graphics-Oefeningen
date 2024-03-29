#include "CG1_2DVector.h"

/********************************************************************/

CG1_2DVector::CG1_2DVector()
{

}

/********************************************************************/

CG1_2DVector::CG1_2DVector(float X, float Y)
{
	x = X;
	y = Y;
}

/********************************************************************/

CG1_2DVector::~CG1_2DVector()
{

}

/********************************************************************/

float CG1_2DVector::operator*(const CG1_2DVector &v)			// DOT-PRODUKT
{
	return ((x * v.x) + (y * v.y));
}

/********************************************************************/

CG1_2DVector &CG1_2DVector::operator=(const CG1_2DVector &v)	// TOEKENNINGS-OPERATOR
{
	x = v.x;
	y = v.y;
	
	return *this;
}

/********************************************************************/

CG1_2DVector CG1_2DVector::operator-()							// NEGATIE
{
	CG1_2DVector Neg;
	Neg.SetXY(-x, -y);
	
	return Neg;
}

/********************************************************************/

void CG1_2DVector::SetXY(float NewX, float NewY)
{
	x = NewX;
	y = NewY;
}

/********************************************************************/

float CG1_2DVector::GetX()
{
	return x;
}

/********************************************************************/

float CG1_2DVector::GetY()
{
	return y;
}

/********************************************************************/

