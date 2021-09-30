#include <iostream>
using namespace std;

class Circle {
  int radius;

public:
  Circle(int n) { radius = n; }
  double getArea();
};

double Circle::getArea() { return 3.14 * radius * radius; }

int main() {
  Circle donut = Circle(1);
  double area = donut.getArea();
  cout << "dount 면적은 " << area << endl;

  Circle pizza = Circle(30);
  area = pizza.getArea();
  cout << "pizza 면적은 " << area << endl;
}