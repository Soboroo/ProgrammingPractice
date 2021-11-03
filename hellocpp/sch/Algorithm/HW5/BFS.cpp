#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int s, e;
vector<vector<int>> adjArray;
vector<int> visited;

void AddEdge(int start, int end) {
  adjArray[start].push_back(end);
  adjArray[end].push_back(start);
}

void printGraph() {
  for (int i = 1; i <= n; i++) {
    cout << i << ": ";
    for (int j = 0; j < adjArray[i].size(); j++)
      cout << adjArray[i][j] << " ";

    cout << endl;
  }
}

void BFS(int v) {
  fill(visited.begin(), visited.end(), 0);
  visited[v] = 1;
  queue<int> q;
  q.push(v);
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    cout << x << " ";
    for (auto i = adjArray[x].begin(); i < adjArray[x].end(); i++) {
      if (!visited[*i]) {
        visited[*i] = 1;
        q.push(*i);
      }
    }
  }
}

int main() {
  cin >> n >> m;
  adjArray.resize(n + 1);
  visited.resize(n + 1);

  for (int i = 0; i < m; i++) {
    cin >> s >> e;
    AddEdge(s, e);
  }

  printGraph();
  BFS(1);
}