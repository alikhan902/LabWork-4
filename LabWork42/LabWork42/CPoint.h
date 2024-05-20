#ifndef CPOINT_H
#define CPOINT_H

#include "CShape.h"

// Класс CPoint, наследующийся от CShape
class CPoint : public CShape {
protected:
    double x; // Координата x
    double y; // Координата y

public:
    // Конструктор по умолчанию и с параметрами
    CPoint(double x_val = 0.0, double y_val = 0.0);

    // Установка координат
    void setCoordinates(double x_val, double y_val);

    // Получение координаты x
    double getX() const;

    // Получение координаты y
    double getY() const;
};

#endif // CPOINT_H
