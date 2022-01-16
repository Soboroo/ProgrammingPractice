#define INT_MAX 2147483647
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int v, e, start;
  cin >> v >> e;
  vector<vector<vector<int>>> graph(v + 1);
  vector<int> distance(v + 1, INT_MAX);
  vector<bool> visited(v + 1, false);
  cin >> start;

  for (int i = 0; i < e; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    graph[u].push_back({v, w});
  }

  distance[start] = 0;
  for (int i = 1; i <= v; i++) {
    int min = INT_MAX;
    int u = 0;
    for (int j = 1; j <= v; j++) {
      if (!visited[j] && distance[j] < min) {
        min = distance[j];
        u = j;
      }
    }
    visited[u] = true;
    for (auto &edge : graph[u]) {
      int v = edge[0];
      int w = edge[1];
      if (distance[u] + w < distance[v]) {
        distance[v] = distance[u] + w;
      }
    }
  }

  for (int i = 1; i <= v; i++) {
    if (distance[i] == INT_MAX)
      cout << "INF" << '\n';
    else
      cout << distance[i] << '\n';
  }
}