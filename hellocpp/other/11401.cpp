#include <iostream>
#define MOD 1000000007
using namespace std;

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

int main() {
  int n, k;
  cin >> n >> k;
  k = min(k, n - k);
  int a = 1, b = 1;
  for (int i = n; i > n - k; i--)
    a = (long long)a * i % MOD;
  for (int i = k; i > 0; i--)
    b = (long long)b * i % MOD;
  cout << (long long)a * pow(b, MOD - 2) % MOD;
}