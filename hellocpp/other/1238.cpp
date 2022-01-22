#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dijkstra(vector<vector<pair<int, int>>> &graph, int start, int end) {
  vector<int> distance(graph.size(), INT_MAX);
  vector<bool> visited(graph.size(), false);
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
      }
    }
  }
  return distance[end];
}

int main() {
  int n, m, start, end;
  cin >> n >> m >> end;
  vector<vector<pair<int, int>>> graph(n + 1);
  int u, v, w;
  for (int i = 0; i < m; i++) {
    cin >> u >> v >> w;
    graph[u].push_back({v, w});
  }
  vector<int> distance(n + 1, INT_MAX);
  for (start = 1; start <= n; start++) {
    distance[start] = dijkstra(graph, start, end);
    distance[start] += dijkstra(graph, end, start);
  }
  cout << *max_element(++distance.begin(), distance.end()) << '\n';
}