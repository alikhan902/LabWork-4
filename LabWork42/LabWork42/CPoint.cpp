#include "CPoint.h"

// ���������� ������������
CPoint::CPoint(double x_val, double y_val) : x(x_val), y(y_val) {}

// ���������� ������ ��������� ���������
void CPoint::setCoordinates(double x_val, double y_val) {
    x = x_val;
    y = y_val;
}

// ���������� ������ ��������� ���������� x
double CPoint::getX() const { return x; }

// ���������� ������ ��������� ���������� y
double CPoint::getY() const { return y; }
