#include <iostream>
#define MOD 1000000007
using namespace std;
using ll = long long;

int pow(int base, int exp) {
  int res = 1;
  while (exp) {
    if (exp & 1)
      res = (long long)res * base % MOD;
    base = (long long)base * base % MOD;
    exp >>= 1;
  }
  return res;
}

int dp[4000001];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t, n, k;
  cin >> t;

  dp[0] = 1;
  for (int i = 1; i < 4000001; i++)
    dp[i] = (ll)dp[i - 1] * i % MOD;

  while (t--) {
    cin >> n >> k;
    cout << ((ll)dp[n] * pow((ll)dp[k] * dp[n - k] % MOD, MOD - 2) % MOD)
         << '\n';
  }
}