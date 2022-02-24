#include <iostream>
#include <vector>
#define INF 1000000000
using namespace std;

void path(int u, int v, vector<vector<int>> &root) {
  if (root[u][v] != INF) {
    vector<int> path;
    path.push_back(u);
    while (u != v) {
      u = root[u][v];
      path.push_back(u);
    }
    cout << path.size() << " ";
    for (auto i : path) {
      cout << i << " ";
    }
    cout << '\n';
  } else {
    cout << "0\n";
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n + 1, vector<int>(n + 1, INF));
  vector<vector<int>> root(n + 1, vector<int>(n + 1, INF));
  for (int i = 0; i < n + 1; i++) {
    g[i][i] = 0;
  }

  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u][v] = min(g[u][v], w);
    root[u][v] = v;
  }

  for (int k = 1; k < n + 1; k++)
    for (int i = 1; i < n + 1; i++)
      for (int j = 1; j < n + 1; j++) {
        if (g[i][k] + g[k][j] < g[i][j]) {
          g[i][j] = g[i][k] + g[k][j];
          root[i][j] = root[i][k];
        }
      }

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++)
      cout << (g[i][j] == INF ? 0 : g[i][j]) << " ";
    cout << endl;
  }

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      path(i, j, root);
    }
  }
}