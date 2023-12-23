#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &v, vector<int> &visited, int s, int &n) {
  visited[s] = n;
  for (auto &i : v[s])
    if (visited[i] == 0)
      dfs(v, visited, i, ++n);
}

int main() {
  int n, m, r, x, y;
  cin >> n >> m >> r;
  vector<vector<int>> v(n + 1);
  vector<int> visited(n + 1);
  while (m--) {
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  for (int i = 0; i < v.size(); i++)
    sort(v[i].begin(), v[i].end());
  dfs(v, visited, r, x = 1);
  for (int i = 1; i <= n; i++)
    cout << visited[i] << "\n";
}