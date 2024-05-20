#include "CLine.h"

// Реализация конструктора
CLine::CLine(const CPoint& start_point, const CPoint& end_point)
    : start(start_point), end(end_point) {}

// Реализация метода установки начальной точки
void CLine::setStart(const CPoint& start_point) {
    start = start_point;
}

// Реализация метода установки конечной точки
void CLine::setEnd(const CPoint& end_point) {
    end = end_point;
}

// Реализация метода получения начальной точки
CPoint CLine::getStart() const { return start; }

// Реализация метода получения конечной точки
CPoint CLine::getEnd() const { return end; }
