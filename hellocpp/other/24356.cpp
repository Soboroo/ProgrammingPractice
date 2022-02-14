#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  a = a * 60 + b;
  c = c * 60 + d;
  if (a > c)
    c += 1440;
  cout << c - a << " " << (c - a) / 30 << '\n';
}