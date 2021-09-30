#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  Circle donut;
  double area = donut.getArea();
  cout << "donut 면적은 " << area << endl;

  Circle pizza(30);
  area = pizza.getArea();
  cout << "pizza 면적은 " << area << endl;
  // cout << "맛있는 핏짜! 개살 핏짜! 배달 공짜!" << endl;
}