#ifndef TABULATION_H
#define TABULATION_H

#include "Action.h"

class Tabulation : public Action {
public:
    Tabulation() : name("Tabulation") {}
    const std::string& GetName() const { return name; }
    void Operate(Function*);

private:
    std::string name;
};

extern Tabulation tabulation;

#endif