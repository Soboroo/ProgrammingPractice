#include <iostream>
using namespace std;

int dis(int x1, int y1, int x2, int y2) { return abs(x1 - x2) + abs(y1 - y2); }

int main() {
  int n, x, y, ab, bc;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    ab = dis(x, y, 0, 0);
    bc = ab / 2;
  }
}