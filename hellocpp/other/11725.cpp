#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, a, b;
  cin >> n;
  vector<vector<int>> graph(n + 1);
  vector<bool> visited(n + 1, 0);
  vector<int> result(n + 1);
  queue<int> q;
  for (int i = 0; i < n - 1; i++) {
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  visited[1] = true;
  q.push(1);
  while (q.size()) {
    int x = q.front();
    q.pop();
    visited[x] = true;
    for (int i = 0; i < graph[x].size(); i++) {
      int y = graph[x][i];
      if (!visited[y]) {
        result[y] = x;
        q.push(y);
      }
    }
  }
  for (int i = 2; i <= n; i++)
    cout << result[i] << '\n';
}