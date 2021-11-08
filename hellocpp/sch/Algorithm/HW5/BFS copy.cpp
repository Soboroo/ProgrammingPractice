#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int s, e;
vector<vector<int>> adjArray;
vector<int> visited;
queue<int> q;

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

void BFS(int s) {
  for (int i = 1; i <= n; i++) {
    visited[i] = 0;
  }

  visited[s] = 1;
  cout << s << " ";
  q.push(s);

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    cout << x << " ";
    for (int v = 0; v < adjArray[x].size(); v++) {
      int n = adjArray[x][v];
      if (adjArray[x][v] && visited[v] == 0) {
        visited[n] = 1;
        q.push(n);
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