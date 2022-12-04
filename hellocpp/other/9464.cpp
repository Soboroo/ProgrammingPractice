#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  while (n--) {
    int m;
    cin >> m;
    vector<vector<int>> v(2, vector<int>(m));
    vector<vector<int>> dp(m, vector<int>(3));
    for (int i = 0; i < 2; i++)
      for (int j = 0; j < m; j++)
        cin >> v[i][j];
    dp[0] = {0, v[0][0], v[1][0]};
    for (int i = 1; i < m; i++) {
      dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
      dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + v[0][i];
      dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + v[1][i];
    }
    m--;
    cout << max(dp[m][0], max(dp[m][1], dp[m][2])) << '\n';
  }
}