#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].first >> v[i].second;
  vector<vector<int>> dp(n + 1, vector<int>(k + 1));
  for (int i = 0; i <= n; i++)
    for (int j = 0; j <= k; j++)
      if (i == 0 || j == 0)
        dp[i][j] = 0;
      else if (v[i - 1].first > j)
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] =
            max(dp[i - 1][j], dp[i - 1][j - v[i - 1].first] + v[i - 1].second);

  cout << dp[n][k];
}