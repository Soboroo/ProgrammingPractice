#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using pt = vector<ll>;

ll ccw(pt &a, pt &b, pt &c) {
  ll x1 = b[0] - a[0];
  ll y1 = b[1] - a[1];
  ll x2 = c[0] - a[0];
  ll y2 = c[1] - a[1];
  if (x1 * y2 - x2 * y1 > 0)
    return 1;
  else if (x1 * y2 - x2 * y1 < 0)
    return -1;
  else
    return 0;
}

int main() {
  vector<vector<pt>> a(2, vector<pt>(2, pt(2)));
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      for (int k = 0; k < 2; k++)
        cin >> a[i][j][k];

  cout << (ccw(a[0][0], a[0][1], a[1][0]) * ccw(a[0][0], a[0][1], a[1][1]) <=
               0 &&
           ccw(a[1][0], a[1][1], a[0][0]) * ccw(a[1][0], a[1][1], a[0][1]) <=
               0);
}