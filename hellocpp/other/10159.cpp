#include <iostream>
#include <vector>
#define MAX 1000000007
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(n, MAX));
  for (int i = 0; i < n; i++) {
    v[i][i] = 0;
  }
  while (m--) {
    int x, y;
    cin >> x >> y;
    v[x - 1][y - 1] = 1;
    v[y - 1][x - 1] = 1;
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << v[i][j] << ' ';
    }
    cout << '\n';
  }
}