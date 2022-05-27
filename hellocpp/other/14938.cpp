#include <iostream>
#include <vector>
#define MAX 100000
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m, r, s = 0, i, j, k;
  cin >> n >> m >> r;
  vector<int> a(++n);
  vector<vector<int>> v(n, vector<int>(n, MAX));
  for (i = 0; i < n; i++)
    v[i][i] = 0;
  for (i = 1; i < n; i++)
    cin >> a[i];
  for (i = 0; i < r; i++) {
    int x, y, w;
    cin >> x >> y >> w;
    v[x][y] = w;
    v[y][x] = w;
  }
  for (k = 1; k < n; k++)
    for (i = 1; i < n; i++)
      for (j = 1; j < n; j++)
        v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
  for (i = 1; i < n; i++) {
    int t = 0;
    for (j = 1; j < n; j++)
      if (v[i][j] <= m)
        t += a[j];
    s = max(s, t);
  }
  cout << s;
}