#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> prenode;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
  int n, m, s, e;
  cin >> n >> m;
  graph.resize(n + 1);
  prenode.resize(n + 1, 0);
  for (int i = 0; i < m; i++) {
    cin >> s >> e;
    graph[s].push_back(e);
    prenode[e]++;
  }
  for (int i = 1; i <= n; i++)
    if (!prenode[i])
      pq.push(i);
  for (int i = 0; i < n; i++) {
    int x = pq.top();
    pq.pop();
    cout << x << " ";
    for (auto j = graph[x].begin(); j < graph[x].end(); j++)
      if (!--prenode[*j])
        pq.push(*j);
  }
}