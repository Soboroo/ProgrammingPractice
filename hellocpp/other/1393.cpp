#include <cmath>
#include <iostream>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

double dist(double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
  int tx, ty, cx, cy, dx, dy, t;
  cin >> tx >> ty >> cx >> cy >> dx >> dy;
  t = gcd(abs(dx), abs(dy));
  dx /= t;
  dy /= t;
  while (dist(tx, ty, cx, cy) > dist(tx, ty, cx + dx, cy + dy)) {
    cx += dx;
    cy += dy;
  }
  cout << cx << ' ' << cy << '\n';
}
