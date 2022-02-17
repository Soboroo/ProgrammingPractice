#include <deque>
#include <iostream>
#include <vector>
#define INF 1000000000
using namespace std;

int dfs(vector<vector<int>> &g, int v, int target, vector<bool> &visited) {
  if (v == target)
    return 0;
  visited[v] = true;
  int res = INF;
  for (int i = 0; i < g[v].size(); i++) {
    if (!visited[g[v][i]]) {
      res = min(res, dfs(g, g[v][i], target, visited));
    }
  }
  return res + 1;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, int>>> g(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u].push_back({v, w});
    g[v].push_back({u, w});
  }

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    vector<bool> visited(n + 1, false);
    deque<int> q;
    q.push_back(u);
    visited[u] = true;
  }