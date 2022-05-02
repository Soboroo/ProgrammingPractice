#include <iostream>
using namespace std;

int main() {
  int n, s = 0;
  cin >> n;
  while (n--) {
    int x, y, z, t;
    cin >> x >> y >> z;
    if (x == y && y == z)
      t = 10000 + x * 1000;
    else if (x == y || x == z)
      t = 1000 + x * 100;
    else if (y == z)
      t = 1000 + y * 100;
    else
      t = max(x, max(y, z)) * 100;
    s = max(s, t);
  }
  cout << s << endl;
}