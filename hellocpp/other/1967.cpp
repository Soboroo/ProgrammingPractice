#include <iostream>
#include <vector>
using namespace std;

int max_distance, max_distance_node;
void dfs(int node, int distance, vector<vector<pair<int, int>>> &a,
         vector<bool> &visited) {
  visited[node] = true;
  if (distance > max_distance) {
    max_distance = distance;
    max_distance_node = node;
  }
  for (auto &p : a[node]) {
    if (!visited[p.first]) {
      dfs(p.first, distance + p.second, a, visited);
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> a(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    a[u].push_back(make_pair(v, w));
    a[v].push_back(make_pair(u, w));
  }
  vector<bool> visited(n + 1, 0);
  dfs(1, 0, a, visited);

  visited.assign(n + 1, 0);
  dfs(max_distance_node, 0, a, visited);
  cout << max_distance << '\n';
}