#ifndef EXP_H
#define EXP_H

#include <cmath>
#include "Function.h"

class Exp : public Function {
public:
    Exp() : name("e ^ x") {}
    const std::string& GetName() const { return name; }
    void SetCoeff() {}
    double GetVal() const { return exp(x); }

private:
    std::string name; // мат. обозначение функции
};

extern Exp f_exp;

#endif