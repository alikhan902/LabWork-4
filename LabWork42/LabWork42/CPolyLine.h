#ifndef CPOLYLINE_H
#define CPOLYLINE_H

#include "CShape.h"
#include "CPoint.h"
#include <vector>

// ����� CPolyLine, ������������� �� CShape
class CPolyLine : public CShape {
private:
    std::vector<CPoint> points; // ������ �����

public:
    // ���������� �����
    void addPoint(const CPoint& point);

    // �������� ��������� �����
    void removeLastPoint();

    // ��������� ������� �����
    std::vector<CPoint> getPoints() const;
};

#endif // CPOLYLINE_H
