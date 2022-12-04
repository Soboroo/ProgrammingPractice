#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x, y, ans = 1000000007, t = 0;
  cin >> n;
  vector<vector<int>> v(n + 1, vector<int>(n + 1, 1000000007));
  for (int i = 0; i <= n; i++)
    v[i][i] = 0;
  while (true) {
    cin >> x >> y;
    if (x == -1 && y == -1)
      break;
    v[x][y] = 1;
    v[y][x] = 1;
  }
  for (int i = 1; i <= n; i++)
    for (int a = 1; a <= n; a++)
      for (int b = 1; b <= n; b++)
        v[a][b] = min(v[a][b], v[a][i] + v[i][b]);
  vector<int> u(n + 1);
  for (int i = 1; i <= n; i++) {
    u[i] = *max_element(++v[i].begin(), v[i].end());
    ans = min(ans, u[i]);
  }
  vector<int> w;
  for (int i = 1; i <= n; i++)
    if (u[i] == ans)
      w.push_back(i);
  cout << ans << " " << w.size() << '\n';
  for (int i = 0; i < w.size(); i++)
    cout << w[i] << " ";
  return 0;
}