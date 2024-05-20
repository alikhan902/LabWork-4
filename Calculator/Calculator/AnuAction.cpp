#include <iostream>
#include "AnyAction.h"

using namespace std;

void AnyAction::Operate(Function*) {
    cout << "Your advertising might be here!" << endl;
    cin.get();
}

AnyAction any_action;