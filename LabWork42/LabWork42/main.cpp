#include <iostream>
#include <vector>
#include "CColoredPoint.h"
#include "CColoredLine.h"
#include "CPolyLine.h"

int main() {
    std::vector<CShape*> objects; // Вектор указателей на объекты типа CShape

    // Создание объектов в динамической памяти
    CColoredPoint* cp1 = new CColoredPoint(1.0, 2.0, "red");
    CColoredPoint* cp2 = new CColoredPoint(3.0, 4.0, "blue");
    CColoredLine* cl1 = new CColoredLine(*cp1, *cp2, "green");
    CPolyLine* pl1 = new CPolyLine();

    // Добавление точек в CPolyLine
    pl1->addPoint(*cp1);
    pl1->addPoint(*cp2);
    pl1->addPoint(CPoint(5.0, 6.0));

    // Добавление объектов в вектор
    objects.push_back(cp1);
    objects.push_back(cp2);
    objects.push_back(cl1);
    objects.push_back(pl1);

    // Использование объектов
    for (auto obj : objects) {
        if (dynamic_cast<CColoredPoint*>(obj)) {
            CColoredPoint* colored_point = dynamic_cast<CColoredPoint*>(obj);
            std::cout << "Colored Point - X: " << colored_point->getX() << ", Y: " << colored_point->getY()
                << ", Color: " << colored_point->getColor() << std::endl;
        }
        else if (dynamic_cast<CColoredLine*>(obj)) {
            CColoredLine* colored_line = dynamic_cast<CColoredLine*>(obj);
            std::cout << "Colored Line - Start: (" << colored_line->getStart().getX() << ", "
                << colored_line->getStart().getY() << "), End: (" << colored_line->getEnd().getX() << ", "
                << colored_line->getEnd().getY() << "), Color: " << colored_line->getColor() << std::endl;
        }
        else if (dynamic_cast<CPolyLine*>(obj)) {
            CPolyLine* poly_line = dynamic_cast<CPolyLine*>(obj);
            std::vector<CPoint> points = poly_line->getPoints();
            std::cout << "Poly Line Points: ";
            for (const auto& point : points) {
                std::cout << "(" << point.getX() << ", " << point.getY() << ") ";
            }
            std::cout << std::endl;
        }
    }

    // Освобождение памяти
    for (auto obj : objects) {
        delete obj;
    }

    return 0;
}
