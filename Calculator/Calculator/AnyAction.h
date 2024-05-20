#ifndef ANYACTION_H
#define ANYACTION_H

#include "Action.h"

class AnyAction : public Action {
public:
    AnyAction() : name("Any action") {}
    const std::string& GetName() const { return name; }
    void Operate(Function*);

private:
    std::string name;
};

extern AnyAction any_action;

#endif