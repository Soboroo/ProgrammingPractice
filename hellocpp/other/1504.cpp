#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

using dint = pair<int, int>;
int dijkstra(const vector<vector<dint>> &graph, int start, int end) {
  vector<int> distance(graph.size(), INT_MAX);
  vector<bool> visited(graph.size(), false);
  priority_queue<dint, vector<dint>, greater<dint>> pq;
  distance[start] = 0;
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
      }
    }
  }
  return distance[end] == INT_MAX ? -1 : distance[end];
}
int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<dint>> graph(n + 1);
  int u, v, w;
  for (int i = 0; i < m; i++) {
    cin >> u >> v >> w;
    graph[u].push_back({v, w});
    graph[v].push_back({u, w});
  }
  int result[2];
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < 2; i++) {
    int x = dijkstra(graph, 1, a);
    int y = dijkstra(graph, a, b);
    int z = dijkstra(graph, b, n);
    result[i] = x == -1 || y == -1 || z == -1 ? -1 : x + y + z;
    swap(a, b);
  }
  cout << (result[0] < result[1] ? result[0] : result[1]);
}