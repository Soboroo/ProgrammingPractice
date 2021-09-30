#include "Exp.h"
#include <cmath>
#include <iostream>
using namespace std;

Exp::Exp() : Exp(1) {}
Exp::Exp(double b) : Exp(b, 1) {}
Exp::Exp(double b, double e) : base(b), exp(e) {}
double Exp::getValue() { return pow(base, exp); }
double Exp::getBase() { return base; }
double Exp::getExp() { return exp; }
bool Exp::equals(Exp e) { return this->getValue() == e.getValue(); }