#include <iostream>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = gcd(a, b), y = gcd(c, d);
  a /= x;
  b /= x;
  c /= y;
  d /= y;
  a = a * d + b * c;
  b *= d;
  x = gcd(a, b);
  a /= x;
  b /= x;
  cout << a << " " << b << endl;
}