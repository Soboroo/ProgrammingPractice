#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<bool>> g(n, vector<bool>(m));
  vector<vector<bool>> vis(n, vector<bool>(m));
  for (int i = 0; i < k; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int j = y1; j < y2; j++)
      for (int k = x1; k < x2; k++)
        g[j][k] = true;
  }
  vector<int> dx = {0, 0, 1, -1};
  vector<int> dy = {1, -1, 0, 0};
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!g[i][j] && !vis[i][j]) {
        int size = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        vis[i][j] = true;
        while (!q.empty()) {
          int x = q.front().first;
          int y = q.front().second;
          q.pop();
          for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !g[nx][ny] &&
                !vis[nx][ny]) {
              vis[nx][ny] = true;
              q.push({nx, ny});
              size++;
            }
          }
        }
        ans.push_back(size);
      }
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (auto i : ans) {
    cout << i << ' ';
  }
}
