#include <iostream>
using namespace std;

class Power {
  int kick;
  int punch;

public:
  Power(int kick = 0, int punch = 0) {
    this->kick = kick;
    this->punch = punch;
  }
  Power(const Power &target) {
    this->kick = target.kick;
    this->punch = target.punch;
  }
  void show();
  Power operator-(Power &op2);
  Power operator+(Power &op2);
  bool operator==(Power &op2);
  Power &operator+=(Power &op2);
  Power &operator-=(Power &op2);
};

void Power::show() {
  cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power &op2) {
  Power tmp;
  tmp.kick = this->kick + op2.kick;
  tmp.punch = this->punch + op2.punch;
  return tmp;
}

bool Power::operator==(Power &op2) {
  return this->kick == op2.kick && this->punch == op2.punch;
}

Power &Power::operator+=(Power &op2) {
  kick += op2.kick;
  punch += op2.punch;
  return *this;
}

Power &Power::operator-=(Power &op2) {}

int main() {
  Power a(3, 5), b(7, 10), c;
  c = a + b;
  a.show();
  b.show();
  a -= b;
  a.show();
}