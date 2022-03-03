#include <iostream>
using namespace std;
using ll = long long;

ll f(int n, int m) {
  ll a = 0, i = m;
  for (; i <= n; i *= m)
    a += n / i;
  return a;
}

int main() {
  int n, m;
  cin >> n >> m;
  m = min(m, n - m);
  cout << min(f(n, 2) - f(m, 2) - f(n - m, 2), f(n, 5) - f(m, 5) - f(n - m, 5));
}