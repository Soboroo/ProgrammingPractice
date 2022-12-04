#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);
  vector<vector<int>> dp(n, vector<int>(4));
  for (int i = 0; i < n; i++)
    cin >> a[i];
  dp[0] = {0, a[0], 0, a[0]};
  for (int i = 0; i < n; i++) {
    dp[i][0] = max(dp[i - 1][0], dp[i - 1][2]);
    dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + a[i];
    dp[i][2] = max(dp[i - 1][1], dp[i - 1][3]);
    dp[i][3] = dp[i - 1][1] + a[i];
    ans = max(ans, max(dp[i][0], max(dp[i][1], max(dp[i][2], dp[i][3]))));
  }
  cout << ans << endl;
}