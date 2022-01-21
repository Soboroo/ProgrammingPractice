#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, int>>> graph(n + 1);
  int u, v, w;
  for (int i = 0; i < m; i++) {
    cin >> u >> v >> w;
    graph[u].push_back({v, w});
  }
  int start, end;
  cin >> start >> end;
  vector<int> distance(n + 1, INT_MAX);
  vector<bool> visited(n + 1, false);
  vector<vector<int>> path(n + 1);
  distance[start] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  pq.push({0, start});
  while (!pq.empty()) {
    int u = pq.top().second;
    pq.pop();
    if (visited[u])
      continue;
    visited[u] = true;
    for (auto &edge : graph[u]) {
      int v = edge.first;
      int w = edge.second;
      if (distance[u] + w < distance[v]) {
        distance[v] = distance[u] + w;
        pq.push({distance[v], v});
        path[v] = path[u];
        path[v].push_back(u);
      }
    }
  }
  cout << distance[end] << '\n';
  cout << path[end].size() + 1 << '\n';
  for (auto &node : path[end])
    cout << node << ' ';
  cout << end << '\n';
}