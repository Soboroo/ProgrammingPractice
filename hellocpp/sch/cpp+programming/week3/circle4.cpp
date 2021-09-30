#include <iostream>
using namespace std;

class Circle {
  unsigned int radius;

public:
  Circle();
  Circle(int);
  double getArea();
};
Circle::Circle()
    : Circle(1) {
} //위임 생성자; 내가 할 일을 Circle(1) 을 호출해 실행스. 구글 사람. 익숙해지자!
Circle::Circle(int n) {
  if (n >= 0)
    radius = n;
  else
    throw;
} //인도 사람
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