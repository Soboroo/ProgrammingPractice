#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

bool dijkstra(vector<vector<pair<int, int>>> &graph, int start, int end, int t1,
              int t2) {
  vector<int> visited(graph.size(), false);
  vector<int> distance(graph.size(), INT_MAX);
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  vector<int> root(graph.size() + 1);
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
        root[v] = u;
      }
    }
  }
  // stack<int> s;
  int x = end;
  while (x != start) {
    // s.push(x);
    if ((x == t1 && root[x] == t2) || (x == t2 && root[x] == t1))
      return true;
    x = root[x];
  }
  // cout << end << ": " << start << " ";
  // while (!s.empty()) {
  //   cout << s.top() << " ";
  //   s.pop();
  // }
  return false;
}

int main() {
  int c;
  cin >> c;
  for (int i = 0; i < c; i++) {
    int n, m, t, s, g, h;
    cin >> n >> m >> t >> s >> g >> h;
    vector<vector<pair<int, int>>> graph(n + 1);
    vector<int> candidate;
    int u, v, w;
    for (int j = 0; j < m; j++) {
      cin >> u >> v >> w;
      graph[u].push_back({v, w});
      graph[v].push_back({u, w});
    }
    for (int j = 0; j < t; j++) {
      cin >> u;
      candidate.push_back(u);
    }
    vector<int> result;
    for (int x : candidate)
      if (dijkstra(graph, s, x, g, h))
        result.push_back(x);
    sort(result.begin(), result.end());
    for (int x : result)
      cout << x << " ";
    cout << '\n';
  }
}