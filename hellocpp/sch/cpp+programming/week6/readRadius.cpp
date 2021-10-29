#include <iostream>
using namespace std;

class Circle {
private:
  int radius;

public:
  Circle();
  Circle(int t);
  ~Circle();
  double getArea() { return 3.14 * radius * radius; }
  int getRadius() { return radius; }
  void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
  radius = 1;
  cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
  this->radius = radius;
  cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() { cout << "소멸자 실행 radius = " << radius << endl; }

void increase(Circle &c) {
  int r = c.getRadius();
  c.setRadius(r + 1);
}

void readRadius(Circle &c) {
  int r;
  cout << "정수 값으로 반지름을 입력하세요>>";
  cin >> r;
  c.setRadius(r);
}

int main() {
  Circle donut;
  readRadius(donut);
  cout << "donut의 면적 = " << donut.getArea() << endl;
}