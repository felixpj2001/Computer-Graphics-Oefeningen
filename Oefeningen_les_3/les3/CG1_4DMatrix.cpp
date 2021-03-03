#include "CG1_4DMatrix.h"
#include "CG1_4DVector.h"
#include <math.h>
#include <stdio.h>

void CG1_4DMatrix::LoadIdentity()
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            m_matrix[(i * N) + j] = (i == j) ? 1 : 0;
        }
    }
}

void CG1_4DMatrix::SetValue(int i, int j, double value)
{
    m_matrix[(i * N) + j] = value;
}

CG1_4DMatrix& CG1_4DMatrix::operator*=(const CG1_4DMatrix& m)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            double som = 0;
            for (int k = 0; k < N; ++k)
            {
                som += m_matrix[(i * N) + k] * m.m_matrix[(k * N) + j];
            }
            m_matrix[(i * N) + j] = som;
        }
    }
    return *this;
}

void CG1_4DMatrix::Translate(double x, double y, double z)
{
    CG1_4DMatrix translatieMatrix;
    translatieMatrix.LoadIdentity();
    translatieMatrix.SetValue(0, 3, x);
    translatieMatrix.SetValue(1, 3, y);
    translatieMatrix.SetValue(2, 3, z);
    *this *= translatieMatrix;
}

void CG1_4DMatrix::RotateX(double angle)
{
    CG1_4DMatrix rotatieMatrix;
    rotatieMatrix.LoadIdentity();
    rotatieMatrix.SetValue(1, 1, cos(angle));
    rotatieMatrix.SetValue(1, 2, -sin(angle));
    rotatieMatrix.SetValue(2, 1, sin(angle));
    rotatieMatrix.SetValue(2, 2, cos(angle));

    *this *= rotatieMatrix;
}

void CG1_4DMatrix::RotateY(double angle)
{
    CG1_4DMatrix rotatieMatrix;
    rotatieMatrix.LoadIdentity();
    rotatieMatrix.SetValue(0, 0, cos(angle));
    rotatieMatrix.SetValue(2, 0, -sin(angle));
    rotatieMatrix.SetValue(0, 2, sin(angle));
    rotatieMatrix.SetValue(2, 2, cos(angle));

    *this *= rotatieMatrix;
}

void CG1_4DMatrix::RotateZ(double angle)
{
    CG1_4DMatrix rotatieMatrix;
    rotatieMatrix.LoadIdentity();
    rotatieMatrix.SetValue(0, 0, cos(angle));
    rotatieMatrix.SetValue(0, 1, -sin(angle));
    rotatieMatrix.SetValue(1, 0, sin(angle));
    rotatieMatrix.SetValue(1, 1, cos(angle));

    *this *= rotatieMatrix;
}

void CG1_4DMatrix::Scale(double x, double y, double z)
{
    CG1_4DMatrix scaleMatrix;
    scaleMatrix.LoadIdentity();
    scaleMatrix.SetValue(0, 0, x);
    scaleMatrix.SetValue(1, 1, y);
    scaleMatrix.SetValue(2, 2, z);

    *this *= scaleMatrix;
}

CG1_4DMatrix& CG1_4DMatrix::operator=(const CG1_4DMatrix& matrix)
{
    if (this == &matrix)
    {
        return *this;
    }

    for (int i = 0; i < N * N; ++i)
    {
        m_matrix[i] = matrix.m_matrix[i];
    }
    return *this;
}

CG1_4DVector& CG1_4DMatrix::operator*(CG1_4DVector& v)
{
    double temp[N] = {v.GetX(), v.GetY(), v.GetZ(), v.GetW()};
    double result[N];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < 1; ++j)
        {
            double som = 0;
            for (int k = 0; k < N; ++k)
            {
                som += m_matrix[(i * N) + k] * temp[(j * N) + k];
            }
            result[(j * N + i)] = som;
        }
    }
    v.SetXYZW(result[0], result[1], result[2], result[3]);
    return v;
}

void CG1_4DMatrix::SetPerspectiveProjection(double d)
{
    LoadIdentity();
    SetValue(2, 2, 0);
    SetValue(3, 2, 1 / d);
}

void CG1_4DMatrix::printMatrix()
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            printf("%f ", m_matrix[(i * N) + j]);
        }
        printf("\n");
    }
    printf("\n");
}