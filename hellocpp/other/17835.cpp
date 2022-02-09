#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;

void dijkstra(vector<vector<pair<int, int>>> &graph, int start,
              vector<ll> &dist) {
  vector<bool> visited(graph.size(), false);
  dist[start] = 0;
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
      if (dist[u] + w < dist[v]) {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<pair<int, int>>> graph(n + 1);
  int u, v, w;
  for (int i = 0; i < m; i++) {
    cin >> u >> v >> w;
    graph[v].push_back({u, w});
  }
  vector<ll> dist(graph.size(), INT64_MAX);
  for (int i = 0; i < k; i++) {
    cin >> u;
    dijkstra(graph, u, dist);
  }
  for (int i = 1; i < dist.size(); i++)
    if (dist[i] == INT64_MAX)
      dist[i] = -1;

  auto it = max_element(++dist.begin(), dist.end());
  cout << it - dist.begin() << '\n' << *it << '\n';
}