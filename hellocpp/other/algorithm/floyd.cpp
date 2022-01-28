#include <iostream>
#include <vector>
using namespace std;
#define INF 100000000

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n + 1, vector<int>(n + 1, INF));
  for (int i = 1; i <= n; i++) {
    g[i][i] = 0;
  }
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u][v] = min(w, g[u][v]);
  }

  for (int k = 1; k <= n; k++)
    for (int a = 1; a <= n; a++)
      for (int b = 1; b <= n; b++)
        g[a][b] = min(g[a][b], g[a][k] + g[k][b]);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      cout << (g[i][j] == INF ? 0 : g[i][j]) << " ";
    cout << '\n';
  }
}