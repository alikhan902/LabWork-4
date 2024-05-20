#ifndef CCOLOREDLINE_H
#define CCOLOREDLINE_H

#include "CLine.h"
#include <string>

// Класс CColoredLine, наследующийся от CLine
class CColoredLine : public CLine {
private:
    std::string color; // Цвет линии

public:
    // Конструктор по умолчанию и с параметрами
    CColoredLine(const CPoint& start_point = CPoint(), const CPoint& end_point = CPoint(), const std::string& color_val = "black");

    // Установка цвета
    void setColor(const std::string& color_val);

    // Получение цвета
    std::string getColor() const;
};

#endif // CCOLOREDLINE_H
