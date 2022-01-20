#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void dijkstra(vector<vector<pair<int, int>>> &graph, int start) {
  vector<int> distance(graph.size(), INT_MAX);
  vector<bool> visited(graph.size(), false);
  distance[start] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  pq.push({0, start});
  while (!pq.empty()) {
    pair<int, int> a = pq.top();
    pq.pop();
    int u = a.second;
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
  for (int i = 1; i < distance.size(); i++) {
    if (distance[i] == INT_MAX)
      cout << "INF" << '\n';
    else
      cout << distance[i] << '\n';
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  int start;
  cin >> start;
  vector<vector<pair<int, int>>> graph(n + 1);
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    graph[u].push_back({v, w});
  }
  dijkstra(graph, start);
}