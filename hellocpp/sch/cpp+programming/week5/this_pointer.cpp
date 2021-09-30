#include <iostream>
using namespace std;

class Circle {
  int radius;

public:
  Circle();
  Circle(int radius);
  void setRadius(int radius) { this->radius = radius; }
  double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() { radius = 1; }

Circle::Circle(int radius) { this->radius = radius; }

int main() {
  Circle c1, c2(2), c3(3);
  c1.setRadius(4);
  c2.setRadius(5);
  c3.setRadius(6);
}