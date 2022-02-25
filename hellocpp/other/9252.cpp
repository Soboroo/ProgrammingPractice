#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string n, m;
  cin >> n >> m;
  n = "0" + n;
  m = "0" + m;
  vector<vector<int>> dp(n.size(), vector<int>(m.size(), 0));
  string result = "";
  for (int i = 1; i < n.size(); i++)
    for (int j = 1; j < m.size(); j++)
      dp[i][j] =
          n[i] == m[j] ? dp[i - 1][j - 1] + 1 : max(dp[i - 1][j], dp[i][j - 1]);

  int i = n.size() - 1, j = m.size() - 1;
  while (i > 0 && j > 0) {
    if (n[i] == m[j]) {
      result = n[i] + result;
      i--;
      j--;
    } else
      dp[i - 1][j] > dp[i][j - 1] ? i-- : j--;
  }
  cout << result.size() << '\n' << result;
}