#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double x, y, c;
  cin >> x >> y >> c;
  cout << x * y / sqrt(x * x + y * y);
}