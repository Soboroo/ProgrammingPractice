#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, u, v;
  cin >> n >> m;
  vector<vector<bool>> a(n + 1, vector<bool>(n + 1));
  for (int i = 0; i <= n; i++) {
    a[i][i] = true;
  }
  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    a[u][v] = true;
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        a[i][j] = a[i][j] || (a[i][k] && a[k][j]);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (!a[i][j]) {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
}