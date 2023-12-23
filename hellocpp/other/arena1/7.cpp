#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> v(n, vector<int>(m));
  int x, y, z;
  for (int i = 0; i < q; i++) {
    cin >> x >> y >> z;
    if (x == 1) {
      for (int j = 0; j < m; j++) {
        v[y - 1][j] += z;
      }
    } else if (x == 2) {
      for (int j = 0; j < n; j++) {
        v[j][y - 1] += z;
      }
    }
  }
  for (auto &i : v) {
    for (auto &j : i) {
      cout << j << " ";
    }
    cout << '\n';
  }
}