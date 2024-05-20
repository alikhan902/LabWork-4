#include "CPolyLine.h"

// Реализация метода добавления точки
void CPolyLine::addPoint(const CPoint& point) {
    points.push_back(point);
}

// Реализация метода удаления последней точки
void CPolyLine::removeLastPoint() {
    if (!points.empty())
        points.pop_back();
}

// Реализация метода получения вектора точек
std::vector<CPoint> CPolyLine::getPoints() const {
    return points;
}
