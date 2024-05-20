#ifndef CALCULATION_H
#define CALCULATION_H

#include "Action.h"

class Calculation : public Action {
public:
    Calculation() : name("Calculation") {}
    const std::string& GetName() const { return name; }
    void Operate(Function*);

private:
    std::string name;
};

extern Calculation calculation;

#endif