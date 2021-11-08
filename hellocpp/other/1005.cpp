#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void topologocalSort() {}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    vector<vector<int>> graph;
    vector<int> visited, cost, postnode;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    visited.resize(n + 1);
    postnode.resize(n + 1);
    fill(visited.begin(), visited.end(), 0);
    fill(postnode.begin(), postnode.end(), 0);
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      cost.push_back(x);
    }
    for (int j = 0; j < m; j++) {
      int x, y;
      cin >> x >> y;
      graph[x].push_back(y);
      postnode[y]++;
    }
    for (int j = 1; j <= n; j++) {
      for (int k = 0; k < graph[j].size(); k++)
        cout << graph[j][k] << " ";
      cout << endl;
    }
    for (int j = 1; j <= n; j++)
      cout << postnode[j] << " ";
  }
}
