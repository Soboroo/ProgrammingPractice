#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

  // if the two circles intersect, print the area of the intersection
  if (pow(x1 - x2, 2) + pow(y1 - y2, 2) <= pow(r1 + r2, 2)) {
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double a = (r1 + r2 + d) / 2;
    double area = sqrt(a * (a - r1) * (a - r2) * (a - d));
    cout << area << endl;
  }

  // if the two circles don't intersect, print 0
  else {
    cout << 0 << endl;
  }

  return 0;
}