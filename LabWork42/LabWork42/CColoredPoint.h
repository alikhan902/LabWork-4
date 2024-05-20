#ifndef CCOLOREDPOINT_H
#define CCOLOREDPOINT_H

#include "CPoint.h"
#include <string>

// ����� CColoredPoint, ������������� �� CPoint
class CColoredPoint : public CPoint {
private:
    std::string color; // ���� �����

public:
    // ����������� �� ��������� � � �����������
    CColoredPoint(double x_val = 0.0, double y_val = 0.0, const std::string& color_val = "black");

    // ��������� �����
    void setColor(const std::string& color_val);

    // ��������� �����
    std::string getColor() const;
};

#endif // CCOLOREDPOINT_H
