#ifndef CLINE_H
#define CLINE_H

#include "CPoint.h"

// Класс CLine, наследующийся от CShape
class CLine : public CShape {
protected:
    CPoint start; // Начальная точка линии
    CPoint end;   // Конечная точка линии

public:
    // Конструктор по умолчанию и с параметрами
    CLine(const CPoint& start_point = CPoint(), const CPoint& end_point = CPoint());

    // Установка начальной точки
    void setStart(const CPoint& start_point);

    // Установка конечной точки
    void setEnd(const CPoint& end_point);

    // Получение начальной точки
    CPoint getStart() const;

    // Получение конечной точки
    CPoint getEnd() const;
};

#endif // CLINE_H
