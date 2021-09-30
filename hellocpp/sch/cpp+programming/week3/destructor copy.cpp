#include <iostream>
using namespace std;

class Circle {
public:
  int radius;
  Circle();
  Circle(int);
  ~Circle();
  double getArea();
};
Circle::Circle() {
  radius = 1;
  cout << "반지름 " << radius << "원 생성" << endl;
}
Circle::Circle(int n) {
  radius = n;
  cout << "반지름 " << radius << "원 생성" << endl;
}
Circle::~Circle() { cout << "반지름 " << radius << "원 소멸" << endl; }
double Circle::getArea() { return 3.14 * radius * radius; }

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
  Circle fDonut(100);
  Circle fPizza(2000);
}

int main() {
  Circle mainDonut;
  f();
  Circle mainPizza(30);
}