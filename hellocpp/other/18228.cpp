#include <iostream>
#define MAX 1000000007
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, t, x = MAX, y = MAX, p = 0;
  cin >> n;
  while (n--) {
    cin >> t;
    if (t == -1)
      p = 1;
    else if (p)
      x = min(x, t);
    else
      y = min(y, t);
  }
  cout << (x + y) << '\n';
}