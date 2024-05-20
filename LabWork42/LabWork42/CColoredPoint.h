#ifndef CCOLOREDPOINT_H
#define CCOLOREDPOINT_H

#include "CPoint.h"
#include <string>

// Класс CColoredPoint, наследующийся от CPoint
class CColoredPoint : public CPoint {
private:
    std::string color; // Цвет точки

public:
    // Конструктор по умолчанию и с параметрами
    CColoredPoint(double x_val = 0.0, double y_val = 0.0, const std::string& color_val = "black");

    // Установка цвета
    void setColor(const std::string& color_val);

    // Получение цвета
    std::string getColor() const;
};

#endif // CCOLOREDPOINT_H
