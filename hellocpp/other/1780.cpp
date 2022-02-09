#include <iostream>
#include <vector>
using namespace std;

vector<int> foo(const vector<vector<int>> &mat, int n, int x, int y) {
  vector<int> ret(3);
  if (n == 1) {
    ret[mat[x][y]] = 1;
    return ret;
  }
  int sum = 0;
  for (int i = x; i < x + n; i += n / 3)
    for (int j = y; j < y + n; j += n / 3) {
      vector<int> tmp = foo(mat, n / 3, i, j);
      for (int k = 0; k < 3; k++) {
        ret[k] += tmp[k];
        // sum += tmp[k];
      }
    }
  // if (sum == 9) {
  //   for (int i = 0; i < 3; i++) {
  //     if (ret[i] == 9)
  //       ret[i] = 1;
  //   }
  // }
  for (int i = 0; i < 3; i++) {
    if (ret[i] == 9)
      ret[i] = 1;
  }

  return ret;
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> mat(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
      ++mat[i][j];
    }
  for (int x : foo(mat, n, 0, 0))
    cout << x << '\n';
}