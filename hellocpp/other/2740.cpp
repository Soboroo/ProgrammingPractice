#include <iostream>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cin >> m >> k;
  int b[m][k], c[n][k];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      cin >> b[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      c[i][j] = 0;
      for (int k = 0; k < m; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
      cout << c[i][j] << ' ';
    }
    cout << '\n';
  }
}