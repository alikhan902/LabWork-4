#include "CPoint.h"

// Реализация конструктора
CPoint::CPoint(double x_val, double y_val) : x(x_val), y(y_val) {}

// Реализация метода установки координат
void CPoint::setCoordinates(double x_val, double y_val) {
    x = x_val;
    y = y_val;
}

// Реализация метода получения координаты x
double CPoint::getX() const { return x; }

// Реализация метода получения координаты y
double CPoint::getY() const { return y; }
