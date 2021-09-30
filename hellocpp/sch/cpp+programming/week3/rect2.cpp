#include <iostream>
using namespace std;

class Rectangle {
  unsigned int width;
  unsigned int height;

public:
  Rectangle(int, int);
  unsigned int getArea();
};

unsigned int Rectangle::getArea() { return width * height; }
Rectangle::Rectangle(int width, int height) {
  if (width >= 0 && height >= 0) {
    this->width = width;
    this->height = height;
  } else
    throw;
}

int main() {
  int a, b;
  cin >> a >> b;
  Rectangle rect(a, b);
  cout << "사각형의 면적은 " << rect.getArea() << endl;
}