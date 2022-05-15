#include <iostream>
#include <vector>
using namespace std;

bool dfs(vector<vector<int>> &g, vector<bool> &vis, int u,
         vector<int> &gomgoms) {
  vis[u] = true;
  for (auto &v : g[u]) {
    if (!vis[v]) {
      return dfs(g, vis, v, gomgoms);
    }
  }
  for (auto &v : gomgoms) {
    if (v == u) {
      return true;
    }
  }
  return false;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n + 1);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
  }
  int g;
  cin >> g;
  vector<int> gomgoms(g);
  for (int i = 0; i < g; i++) {
    cin >> gomgoms[i];
  }
  vector<bool> vis(n + 1);
  bool flag = false;
  for (int i = 1; i <= n; i++) {
    if (!vis[i] && !dfs(v, vis, i, gomgoms)) {
    }
  }
  cout << "Yes" << endl;
}