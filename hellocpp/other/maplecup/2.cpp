#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, m, res1 = 0, res2 = 0, immunized1 = 0, immunized2 = 0, used1 = 0,
            used2 = 0;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < m; ++i)
    cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < n; i++) {
    if (!i) {
      immunized1 = a[i];
      res1++;
      used1 = a[i];
    } else {
      used1 = a[i];
      if (used1 - immunized1 >= 100) {
        res1++;
        immunized1 = used1;
      }
    }
  }
  for (int i = 0; i < m; i++) {
    if (!i) {
      immunized2 = b[i];
      res2++;
      used2 = b[i];
    } else {
      used2 = b[i];
      if (used2 - immunized2 >= 360) {
        res2++;
        immunized2 = used2;
      }
    }
  }
  cout << res1 << " " << res2;
}