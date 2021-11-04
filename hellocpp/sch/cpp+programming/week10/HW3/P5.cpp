// +: 맴버 함수 구현 ==: 외장 함수 구현
#include <iostream>
using namespace std;

class Color {
  int red, green, blue;

public:
  Color(int red, int green, int blue) : red(red), green(green), blue(blue) {}
  Color() : Color(0, 0, 0) {}
  Color operator+(Color &);
  friend bool operator==(Color &, Color &);
  void show() { cout << red << " " << green << " " << blue << endl; }
};

Color Color::operator+(Color &op2) {
  Color tmp = *this;
  tmp.red += op2.red;
  tmp.green += op2.green;
  tmp.blue += op2.blue;
  return tmp;
}

bool operator==(Color &op1, Color &op2) {
  return op1.red == op2.red && op1.green == op2.green && op1.blue == op2.blue;
}

int main() {
  cout << "20201517 우영윤" << endl;
  Color red(255, 0, 0), blue(0, 0, 255), c;
  c = red + blue;
  c.show();

  Color fuchsia(255, 0, 255);
  if (c == fuchsia)
    cout << "보라색 맞음";
  else
    cout << "보라색 아님";
}