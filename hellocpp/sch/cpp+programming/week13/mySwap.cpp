#include <iostream>
using namespace std;

template <class T> void myswap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 5, b = 3;
  double x = 4.3, y = 7.4;

  myswap(a, b);
  myswap(x, y);
  cout << a << " " << b << '\n';
  cout << x << " " << y << '\n';
}