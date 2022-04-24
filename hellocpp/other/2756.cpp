#include <cmath>
#include <iostream>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void input(int &a) {
  for (int i = 0; i < 3; i++) {
    double x, y;
    cin >> x >> y;
    a += min(100.0, max(0.0, 100 - 20 * (ceil(distance(0, 0, x, y) / 3) - 1)));
  }
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    int a = 0, b = 0;
    input(a);
    input(b);
    cout << "SCORE: " << a << " to " << b << ", ";
    if (a == b)
      cout << "TIE." << endl;
    else
      cout << "PLAYER " << (a > b ? "1" : "2") << " WINS." << endl;
  }
}