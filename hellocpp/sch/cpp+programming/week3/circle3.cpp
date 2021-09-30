#include <iostream>
using namespace std;

class Circle {
  int radius;

public:
  Circle();
  Circle(int);
  double getArea();
};
Circle::Circle() { radius = 1; }
Circle::Circle(int n) { radius = n; }
double Circle::getArea() { return 3.14 * radius * radius; }

int main() {
  Circle donut;
  double area = donut.getArea();
  cout << "donut 면적은 " << area << endl;

  Circle pizza(30);
  area = pizza.getArea();
  cout << "pizza 면적은 " << area << endl;
  // cout << "맛있는 핏짜! 개살 핏짜! 배달 공짜!" << endl;
}