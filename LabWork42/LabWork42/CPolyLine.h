#ifndef CPOLYLINE_H
#define CPOLYLINE_H

#include "CShape.h"
#include "CPoint.h"
#include <vector>

// Класс CPolyLine, наследующийся от CShape
class CPolyLine : public CShape {
private:
    std::vector<CPoint> points; // Вектор точек

public:
    // Добавление точки
    void addPoint(const CPoint& point);

    // Удаление последней точки
    void removeLastPoint();

    // Получение вектора точек
    std::vector<CPoint> getPoints() const;
};

#endif // CPOLYLINE_H
