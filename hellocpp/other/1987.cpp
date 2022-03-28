#include <iostream>
#include <string>
#include <vector>
using namespace std;

void dfs(vector<vector<char>> &g, vector<vector<int>> &vis, int x, int y) {
  vector<int> dx = {1, 0, -1, 0};
  vector<int> dy = {0, 1, 0, -1};
  for (int i = 0; i < 4; ++i) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx >= 0 && nx < g.size() && ny >= 0 && ny < g[0].size() &&
        vis[nx][ny] == 0 && g[x][y] != g[nx][ny]) {
      vis[nx][ny] = vis[x][y] + 1;
      dfs(g, vis, nx, ny);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m));
  vector<vector<int>> cost(n, vector<int>(m));
  cost[0][0] = 1;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < m; ++j) {
      a[i][j] = s[j];
    }
  }
  dfs(a, cost, 0, 0);
  int max = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (cost[i][j] > max) {
        max = cost[i][j];
      }
    }
  }
  cout << max << endl;
}