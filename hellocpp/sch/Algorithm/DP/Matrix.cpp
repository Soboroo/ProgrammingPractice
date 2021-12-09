#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> matrix(n);
  vector<vector<int>> dp(n);
  for (int i = 0; i < n; i++) {
    matrix[i].resize(m);
    dp[i].resize(m);
    for (int j = 0; j < m; j++)
      cin >> matrix[i][j];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!i && !j)
        dp[i][j] = matrix[i][j];
      else if (!i)
        dp[i][j] = dp[i][j - 1] + matrix[i][j];
      else if (!j)
        dp[i][j] = dp[i - 1][j] + matrix[i][j];
      else
        dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + matrix[i][j];
    }
  }
  cin >> n >> m;
  cout << dp[n][m] << endl;
}