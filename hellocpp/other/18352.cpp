#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, m, k, x;
  cin >> n >> m >> k >> x;
  vector<vector<pair<int, int>>> g(n + 1);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    g[u].push_back({v, 1});
  }
  vector<int> d(n + 1, INT_MAX);
  d[x] = 0;
  queue<int> q;
  q.push(x);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (auto &e : g[u]) {
      int v = e.first;
      int w = e.second;
      if (d[v] > d[u] + w) {
        d[v] = d[u] + w;
        q.push(v);
      }
    }
  }
  bool flag = false;
  for (int i = 1; i < n + 1; ++i) {
    if (d[i] == k) {
      cout << i << "\n";
      flag = true;
    }
  }
  if (!flag) {
    cout << -1;
  }
}