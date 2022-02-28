#include <iostream>
using namespace std;

int pow(int a, int n, int mod) {
  int res = 1;
  while (n) {
    if (n & 1)
      res = (long long)res * a % mod;
    a = (long long)a * a % mod;
    n >>= 1;
  }
  return res;
}

int main() {
  int a, r, n, mod;
  cin >> a >> r >> n >> mod;
  if (r == 1) {
    cout << a * n % mod << endl;
    return 0;
  }
  int res = (long long)a * (pow(r, n, mod) - 1) % mod;
  cout << res / (r - 1) << endl;
}