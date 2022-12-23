#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (n == m) {
    cout << 1;
    return 0;
  }
  if (m < n)
    swap(n, m);
  m -= n;
  vector<vector<int>> v(m, vector<int>(m));
  for (int i = 0; i < m; i++) {
    for (int j = i; j < m; j++) {
      v[i][j] = 1;
    }
  }
  for (int i = 1; i < m; i++) {
    for (int j = i; j < m; j++) {
      v[i][j] += v[i - 1][j];
    }
  }
  cout << v[m - 1][m - 1];
}