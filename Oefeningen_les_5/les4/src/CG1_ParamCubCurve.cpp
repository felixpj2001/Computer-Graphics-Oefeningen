#include "CG1_ParamCubCurve.h"

//--------------------------------------------------------------------

CG1_ParamCubCurve::CG1_ParamCubCurve()
{

}

//--------------------------------------------------------------------

CG1_ParamCubCurve::~CG1_ParamCubCurve()
{
	m_CtrlPointVector.clear();
	m_PointVector.clear();
}

//--------------------------------------------------------------------

int CG1_ParamCubCurve::getNrOfCtrlPoints()
{
	return m_CtrlPointVector.size();
}

//--------------------------------------------------------------------

int CG1_ParamCubCurve::getNrOfPoints()
{
	return m_PointVector.size();
}

//--------------------------------------------------------------------

CG1_4DVector CG1_ParamCubCurve::getCtrlPoint(int index)
{
	m_CtrlIndex = index;
	return m_CtrlPointVector.at(m_CtrlIndex);
}

//--------------------------------------------------------------------

CG1_4DVector CG1_ParamCubCurve::getNextCtrlPoint()
{
	m_CtrlIndex++;
	return m_CtrlPointVector.at(m_CtrlIndex);
}

//--------------------------------------------------------------------

CG1_4DVector CG1_ParamCubCurve::getPoint(int index)
{
	m_Index = index;
	return m_PointVector.at(m_Index);
}

//--------------------------------------------------------------------

CG1_4DVector CG1_ParamCubCurve::getNextPoint()
{
	m_Index++;
	return m_PointVector.at(m_Index);
}

//--------------------------------------------------------------------

void CG1_ParamCubCurve::addCtrlPoint(CG1_4DVector p)
{
	if (m_CtrlIndex < 4)
		m_CtrlPointVector.push_back(p);
	m_CtrlIndex++;
}

//--------------------------------------------------------------------

void CG1_ParamCubCurve::clearCtrlPoints()
{
	m_CtrlPointVector.clear();
	m_CtrlIndex = 0;
}

//--------------------------------------------------------------------

void CG1_ParamCubCurve::addPoint(CG1_4DVector p)
{
	m_PointVector.push_back(p);
	m_Index++;
}


//--------------------------------------------------------------------

void CG1_ParamCubCurve::clearPoints()
{
	m_PointVector.clear();
	m_Index = 0;
}

//--------------------------------------------------------------------

void CG1_ParamCubCurve::evaluate(double t, CG1_4DVector& p)
{
	double x, y, z;
	auto SumMultiplication = [](double* l1, double* l2) {
		double res = 0;
		for (int i = 0; i < 4; i++) {
			res += l1[i] * l2[i];
		}
		return res;
	};

	double factors[4] = { (pow(t, 3) * m_BaseMatrix[0] + pow(t, 2) * m_BaseMatrix[1] + t * m_BaseMatrix[2] + m_BaseMatrix[3]),
							(pow(t, 3) * m_BaseMatrix[4] + pow(t, 2) * m_BaseMatrix[5] + t * m_BaseMatrix[6] + m_BaseMatrix[7]),
							(pow(t, 3) * m_BaseMatrix[8] + pow(t, 2) * m_BaseMatrix[9] + t * m_BaseMatrix[10] + m_BaseMatrix[11]),
							(pow(t, 3) * m_BaseMatrix[12] + pow(t, 2) * m_BaseMatrix[13] + t * m_BaseMatrix[14] + m_BaseMatrix[15]) };

	double X[4] = { m_GeoMatrix[0], m_GeoMatrix[1], m_GeoMatrix[2],  m_GeoMatrix[3] };
	double Y[4] = { m_GeoMatrix[4], m_GeoMatrix[5], m_GeoMatrix[6],  m_GeoMatrix[7] };
	double Z[4] = { m_GeoMatrix[8], m_GeoMatrix[9], m_GeoMatrix[10], m_GeoMatrix[11] };

	x = SumMultiplication(factors, X);
	y = SumMultiplication(factors, Y);
	z = SumMultiplication(factors, Z);

	p.SetXYZ(x, y, z);
}

//--------------------------------------------------------------------
