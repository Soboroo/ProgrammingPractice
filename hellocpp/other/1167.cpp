#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define INF 1000000000

#if 0
int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> a(n + 1);
  for (int i = 0; i < n; i++) {
    int u, v, w;
    cin >> u;
    for (int j = 0;; j = (j + 1) % 2) {
      int t;
      cin >> t;
      if (t == -1)
        break;
      if (j)
        a[u].push_back(make_pair(v, t));
      else
        v = t;
    }
  }
}
#endif

#if 0
int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n + 1, vector<int>(n + 1, INF));

  for (int i = 1; i <= n; i++) {
    a[i][i] = 0;
  }

  for (int i = 0; i < n; i++) {
    int u, v, w;
    cin >> u;
    for (int j = 0;; j = (j + 1) % 2) {
      int t;
      cin >> t;
      if (t == -1)
        break;
      if (j)
        a[u][v] = t;
      else
        v = t;
    }
  }

  for (int k = 1; k <= n; k++)
    for (int x = 1; x <= n; x++)
      for (int y = x; y <= n; y++)
        a[x][y] = min(a[x][y], a[x][k] + a[k][y]);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      cout << (a[i][j] == INF ? -1 : a[i][j]) << " ";
    cout << '\n';
  }
}
#endif

int dfs_impl(vector<vector<pair<int, int>>> &a, int node, vector<bool> &used) {
  int ret = 0;
  for (auto &p : a[node]) {
    if (used[p.first])
      continue;
    used[p.first] = true;
    ret = max(ret, dfs_impl(a, p.first, used) + p.second);
  }
  return ret;
}
int dfs(vector<vector<pair<int, int>>> &a) {
  vector<int> d(a.size(), INF);
  for (int i = 1; i < a.size(); i++) {
    vector<bool> used(a.size(), false);
    used[i] = true;
    d[i] = dfs_impl(a, i, used);
  }
  // for (int i = 1; i < a.size(); i++)
  //   cout << d[i] << " ";
  return *max_element(++d.begin(), d.end());
}

int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> a(n + 1);
  for (int i = 0; i < n; i++) {
    int u, v, w;
    cin >> u;
    for (int j = 0;; j = (j + 1) % 2) {
      int t;
      cin >> t;
      if (t == -1)
        break;
      if (j)
        a[u].push_back(make_pair(v, t));
      else
        v = t;
    }
  }
  int d = dfs(a);
  cout << d;
}