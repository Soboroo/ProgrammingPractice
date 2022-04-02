#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int &ca, int &cb, int &ma, int &mb, bool a_win) {
  if (a_win) {
    ca++;
    ma = max(ma, ca);
    cb = 0;
  } else {
    cb++;
    mb = max(mb, cb);
    ca = 0;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), r(n);
  for (auto &i : a)
    cin >> i;
  for (auto &i : b)
    cin >> i;
  int ca = 0, cb = 0, ma = 0, mb = 0;
  for (int i = 0; i < n; i++) {
    if ((a[i] + 1) % 3 == b[i] % 3)
      solve(ca, cb, ma, mb, false);
    else if ((b[i] + 1) % 3 == a[i] % 3)
      solve(ca, cb, ma, mb, true);
    else {
      if (ca > cb)
        solve(ca, cb, ma, mb, false);
      else
        solve(ca, cb, ma, mb, true);
    }
  }
  cout << max(ma, mb);
}