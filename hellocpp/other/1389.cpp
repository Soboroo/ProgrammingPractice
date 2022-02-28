#include <iostream>
#include <vector>
#define INF 1000000000
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> a(n + 1, vector<int>(n + 1, INF));
  for (int i = 0; i < n + 1; i++) {
    a[i][i] = 0;
  }
  for (int i = 0; i < k; i++) {
    int u, v;
    cin >> u >> v;
    a[u][v] = 1;
    a[v][u] = 1;
  }
  for (int f = 0; f < n + 1; f++) {
    for (int i = 0; i < n + 1; i++) {
      for (int j = 0; j < n + 1; j++) {
        a[i][j] = min(a[i][j], a[i][f] + a[f][j]);
      }
    }
  }
  int min = INF, minidx;
  for (int i = 1; i < n + 1; i++) {
    int tmp = 0;
    for (int j = 1; j < n + 1; j++)
      tmp += a[i][j];
    if (tmp < min) {
      min = tmp;
      minidx = i;
    }
  }
  cout << minidx;
}