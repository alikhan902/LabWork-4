#include "CColoredPoint.h"

// Реализация конструктора
CColoredPoint::CColoredPoint(double x_val, double y_val, const std::string& color_val)
    : CPoint(x_val, y_val), color(color_val) {}

// Реализация метода установки цвета
void CColoredPoint::setColor(const std::string& color_val) {
    color = color_val;
}

// Реализация метода получения цвета
std::string CColoredPoint::getColor() const { return color; }
