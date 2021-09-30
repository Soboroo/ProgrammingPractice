#include <iostream>
using namespace std;

class Rectangle {
  int width, height;

public:
  Rectangle();
  Rectangle(int);
  Rectangle(int, int);
  bool isSquare();
};

Rectangle::Rectangle() : Rectangle(1) {}
Rectangle::Rectangle(int n) : Rectangle(n, n) {}
Rectangle::Rectangle(int x, int y) {
  width = x;
  height = y;
}
bool Rectangle::isSquare() { return width == height; }

int main() {
  Rectangle rect1;
  Rectangle rect2(3, 5);
  Rectangle rect3(3);

  if (rect1.isSquare())
    cout << "rect1은 정사각형이다." << endl;
  if (rect2.isSquare())
    cout << "rect2은 정사각형이다." << endl;
  if (rect3.isSquare())
    cout << "rect3은 정사각형이다." << endl;
}