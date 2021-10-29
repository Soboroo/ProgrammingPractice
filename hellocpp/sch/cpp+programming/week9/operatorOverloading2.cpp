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
  Power operator+(int op2);
  bool operator==(Power &op2);
  Power &operator+=(Power &op2);
  Power &operator-=(Power &op2);
  Power &operator++();
  Power operator++(int);
  bool operator!();
  Power &operator<<(int);
  friend Power operator+(int, Power);
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

Power Power::operator+(int op2) {
  Power tmp;
  tmp.kick = this->kick + op2;
  tmp.punch = this->punch + op2;
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

Power &Power::operator++() {
  kick++;
  punch++;
  return *this;
}

Power Power::operator++(int x) {
  Power tmp = *this;
  kick++;
  punch++;
  return tmp;
}

bool Power::operator!() { return !kick && !punch; }

Power &Power::operator<<(int n) {
  kick += n;
  punch += n;
  return *this;
}

Power operator+(int op1, Power op2) {
  Power tmp = op2;
  tmp.kick += op1;
  tmp.punch += op1;
  return tmp;
}

int main() {
  Power a(1, 2);
  a << 3 << 5 << 6;
  a.show();
}