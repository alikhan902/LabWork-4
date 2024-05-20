#include <iostream>
#include "Calculation.h"

using namespace std;

void Calculation::Operate(Function* pFunc) {
    cout << "Calculation for function ó = ";
    cout << pFunc->GetName() << endl;
    pFunc->SetCoeff();
    double x;
    cout << "Enter x = ";
    cin >> x;
    cin.get();
    pFunc->SetArg(x);
    cout << "y = " << pFunc->GetVal() << endl;
    cin.get();
}

Calculation calculation;