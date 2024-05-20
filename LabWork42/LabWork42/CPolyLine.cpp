#include "CPolyLine.h"

// ���������� ������ ���������� �����
void CPolyLine::addPoint(const CPoint& point) {
    points.push_back(point);
}

// ���������� ������ �������� ��������� �����
void CPolyLine::removeLastPoint() {
    if (!points.empty())
        points.pop_back();
}

// ���������� ������ ��������� ������� �����
std::vector<CPoint> CPolyLine::getPoints() const {
    return points;
}
