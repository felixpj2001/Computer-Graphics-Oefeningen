#ifndef CG1_4DMATRIX_H
#define CG1_4DMATRIX_H

#include "CG1_4DVector.h"

class CG1_4DMatrix
{
public:
    const static int N = 4;
    void LoadIdentity();
    void Translate(double x, double y, double z);
    void RotateX(double angle);
    void RotateY(double angle);
    void RotateZ(double angle);
    void Scale(double x, double y, double z);
    CG1_4DMatrix& operator=(const CG1_4DMatrix& matrix);
    CG1_4DMatrix& operator*=(const CG1_4DMatrix& m);
    CG1_4DVector& operator*(CG1_4DVector& v);
    void SetPerspectiveProjection(double d);
    void printMatrix();
private:
    double m_matrix[N*N];
    void SetValue(int i, int j, double value);
};

#endif