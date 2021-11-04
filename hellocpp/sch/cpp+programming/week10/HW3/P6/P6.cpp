#include <iostream>
using namespace std;

class Circle {
  int radius;

public:
  Circle(int radius = 0) : radius(radius) {}
  void show() { cout << "radius = " << radius << "인 원" << endl; }
  friend Circle &operator++(Circle &);
  friend Circle operator++(Circle &, int);
};

Circle &operator++(Circle &op) {
  op.radius++;
  return op;
}

Circle operator++(Circle &op, int i) {
  Circle tmp = op;
  op.radius++;
  return tmp;
}

int main() {
  cout << "20201517 우영윤" << endl;
  Circle a(5), b(4);
  ++a;
  b = a++;
  a.show();
  b.show();
}