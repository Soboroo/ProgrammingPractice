#include <iostream>
using namespace std;

class Rect; //밑의 equals 함수 프로토타입 선언을 위한 class 선언
bool equals(Rect r, Rect s);

class Rect {
  int width, height;

public:
  Rect(int width, int height) {
    this->width = width;
    this->height = height;
  }
  friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) {
  return r.width = s.width && r.height == s.height;
}

int main() {
  Rect a(3, 4), b(4, 5);
  if (equals(a, b))
    cout << "equal" << endl;
  else
    cout << "not equal" << endl;
}