#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  while (true) {
    int n, m;
    cin >> m >> n;
    if (n == 0 && m == 0)
      break;
    vector<vector<bool>> g(n, vector<bool>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        int x;
        cin >> x;
        g[i][j] = x == 1;
      }
    }
    int res = 0;
    vector<int> dx = {1, 0, -1, 0, 1, 1, -1, -1};
    vector<int> dy = {0, 1, 0, -1, 1, -1, 1, -1};
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (g[i][j] && !vis[i][j]) {
          vis[i][j] = true;
          res++;
          queue<pair<int, int>> q;
          q.push({i, j});
          while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int k = 0; k < 8; k++) {
              int nx = x + dx[k];
              int ny = y + dy[k];
              if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] &&
                  g[nx][ny]) {
                vis[nx][ny] = true;
                q.push({nx, ny});
              }
            }
          }
        }
      }
    }
    cout << res << endl;
  }
}