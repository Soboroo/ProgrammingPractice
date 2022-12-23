#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

double dist(int x1, int y1, int x2, int y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void dijkstra(int s, int n, map<int, vector<int>> &v, map<int, int> &d) {
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      q;
  q.push({0, s});
  d[s] = 0;
  while (!q.empty()) {
    int u = q.top().second;
    q.pop();
    for (int i = 0; i < v[u].size(); i++) {
      int w = v[u][i];
      if (d[w] > d[u] + 1) {
        d[w] = d[u] + 1;
        q.push({d[w], w});
      }
    }
  }
}

int main() {
  int n, f;
  cin >> n >> f;
  map<int, pair<int, int>> n_name;
  map<int, vector<int>> v;
  n_name[0] = {0, 0};
  v[0] = {};
  for (int i = 1; i <= n; i++) {
    int x, y;
    cin >> x >> y;
    n_name[i] = {x, y};
    v[i] = {};
  }
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      if (n_name[i] == n_name[j])
        continue;
      if (abs(n_name[i].first - n_name[j].first) <= 2 &&
          abs(n_name[i].second - n_name[j].second) <= 2) {
        v[i].push_back(j);
      }
    }
  }
}