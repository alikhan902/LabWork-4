#include "CColoredLine.h"

// Реализация конструктора
CColoredLine::CColoredLine(const CPoint& start_point, const CPoint& end_point, const std::string& color_val)
    : CLine(start_point, end_point), color(color_val) {}

// Реализация метода установки цвета
void CColoredLine::setColor(const std::string& color_val) {
    color = color_val;
}

// Реализация метода получения цвета
std::string CColoredLine::getColor() const { return color; }
