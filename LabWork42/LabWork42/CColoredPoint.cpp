#include "CColoredPoint.h"

// ���������� ������������
CColoredPoint::CColoredPoint(double x_val, double y_val, const std::string& color_val)
    : CPoint(x_val, y_val), color(color_val) {}

// ���������� ������ ��������� �����
void CColoredPoint::setColor(const std::string& color_val) {
    color = color_val;
}

// ���������� ������ ��������� �����
std::string CColoredPoint::getColor() const { return color; }
