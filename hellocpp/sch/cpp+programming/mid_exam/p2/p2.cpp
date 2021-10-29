#include <iostream>
using namespace std;

class Complex {
  int real, imag;

public:
  Complex(int real, int imag) {
    this->real = real;
    this->imag = imag;
  }
  Complex(int real) {
    this->real = real;
    this->imag = 0;
  }
  Complex() {
    this->real = 0;
    this->imag = 0;
  }
  void show() {
    if (real && imag)
      cout << "( " << real << (imag < 0 ? '-' : '+') << abs(imag) << "i )"
           << endl;
    else if (!imag)
      cout << "( " << real << " )" << endl;
    else
      cout << "( " << imag << "i )" << endl;
  }
};

int main() {
  cout << "20201517 우영윤" << endl;
  Complex u(12, 34);
  Complex v(56, -78);
  Complex x(90);
  Complex y(0, 78);
  Complex z;

  u.show();
  v.show();
  x.show();
  y.show();
  z.show();
}