#include <iostream>
#include <vector>
using namespace std;
const long long mod = 1000000007;

long long power(long long x, long long y) {
  if (y == 0)
    return 1;
  if (y == 1)
    return x;
  bool flag = y % 2;
  if (flag)
    y -= 1;
  long long r = power(x, y / 2) % mod;
  return r * r * (flag ? x : 1) % mod;
}

int main() {
  int n;
  cin >> n;
  vector<vector<long long>> g(n);
  cout << power(2, 10) << endl;

  for (int i = 0; i < n; i++) {
    vector<long long> tmp(2);
    cin >> tmp[0] >> tmp[1];
    tmp[0] *= tmp[1] % mod;
    tmp[1]--;
    g[i] = tmp;
  }
  long long result = 0;
  for (int i = 0; i < n; i++) {
    result += g[i][0] * power(2, g[i][1]) % mod;
  }
  cout << result % mod;
}