#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const int INSTALLED = 2;
const int DEFENDED = 1;
const int NOT_DEFENDED = 0;

int n, m;
int s, e;
vector<vector<int>> adjArray;
vector<int> visited;

int numTuret = 0;

void AddEdge(int start, int end) {
  adjArray[start].push_back(end);
  adjArray[end].push_back(start);
}

int aDFS(int v) {
  bool isDefended = true;
  bool isInstalled = false;
  int result;
  visited[v] = 1;
  for (auto i = adjArray[v].begin(); i != adjArray[v].end(); i++) {
    if (!visited[*i]) {
      visited[*i] = 1;
      result = aDFS(*i);
      if (result == NOT_DEFENDED)
        isDefended = false;
      else if (result == INSTALLED)
        isInstalled = true;
    }
  }
  if (!isDefended) {
    numTuret++;
    return INSTALLED;
  } else if (isInstalled)
    return DEFENDED;
  else
    return NOT_DEFENDED;
}

void DFS() {
  fill(visited.begin(), visited.end(), 0);
  for (int i = 1; i <= n; i++) {
    if (!visited[i] && aDFS(i) == NOT_DEFENDED)
      numTuret++;
  }
}

int main() {
  // freopen("input.txt", "r", stdin);
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    numTuret = 0;
    adjArray.clear();
    visited.clear();

    cin >> n >> m;

    adjArray.resize(n + 1);
    visited.resize(n + 1);

    for (int j = 0; j < m; j++) {
      cin >> s >> e;
      AddEdge(s, e);
    }

    DFS();

    cout << numTuret << endl;
  }
}
