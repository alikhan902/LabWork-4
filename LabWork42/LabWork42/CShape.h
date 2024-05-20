#ifndef CSHAPE_H
#define CSHAPE_H

// Базовый класс CShape
class CShape {
public:
    virtual ~CShape() = default; // Виртуальный деструктор для правильного удаления производных объектов
};

#endif // CSHAPE_H