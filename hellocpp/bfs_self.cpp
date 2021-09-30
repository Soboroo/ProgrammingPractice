#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bfs(int start, vector<int> graph, int n) {
  bool check[n + 1];
  fill(check, check + n + 1, false);
  check[start] = true;

  // for (int i = 0; i < graph[start].)
}

int main() {
  int node, n, start;
  cin >> node >> n >> start;
  vector<int> graph[node + 1];
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }

  for (int i = 0; i < n; i++) {
    sort(graph[i].begin(), graph[i].end());
  }
}