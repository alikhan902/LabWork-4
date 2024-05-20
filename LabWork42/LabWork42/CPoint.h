#ifndef CPOINT_H
#define CPOINT_H

#include "CShape.h"

// ����� CPoint, ������������� �� CShape
class CPoint : public CShape {
protected:
    double x; // ���������� x
    double y; // ���������� y

public:
    // ����������� �� ��������� � � �����������
    CPoint(double x_val = 0.0, double y_val = 0.0);

    // ��������� ���������
    void setCoordinates(double x_val, double y_val);

    // ��������� ���������� x
    double getX() const;

    // ��������� ���������� y
    double getY() const;
};

#endif // CPOINT_H
