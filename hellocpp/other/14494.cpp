#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int solve(vector<vector<int>> &v, int x, int y) {
  return (v[x][y] = v[x][y] != -1
                        ? v[x][y]
                        : ((long long)solve(v, x - 1, y) + solve(v, x, y - 1) +
                           solve(v, x - 1, y - 1)) %
                              MOD);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m, -1));
  for (int i = 0; i < n; i++)
    v[i][0] = 1;
  for (int i = 0; i < m; i++)
    v[0][i] = 1;
  cout << solve(v, n - 1, m - 1) << '\n';
}