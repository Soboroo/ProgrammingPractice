#include <iostream>
#include <vector>
using namespace std;

using mat = vector<vector<int>>;
using ll = long long;

mat mat_mul(const mat &a, const mat &b) {
  mat c(a.size(), vector<int>(b[0].size(), 0));
  for (int i = 0; i < a.size(); i++)
    for (int j = 0; j < b.size(); j++)
      for (int k = 0; k < b[0].size(); k++)
        c[i][k] = (c[i][k] + (ll)a[i][j] * b[j][k]) % 1000;
  return c;
}

mat &mat_pow(const mat &a, ll n) {
  if (n == 1) {
    static mat b(a.size(), vector<int>(a[0].size(), 0));
    for (int i = 0; i < a.size(); i++)
      for (int j = 0; j < a[0].size(); j++)
        b[i][j] = a[i][j] % 1000;
    return b;
  }
  mat &b = mat_pow(a, n / 2);
  b = mat_mul(b, b);
  if (n % 2)
    b = mat_mul(b, a);
  return b;
}

int main() {
  ll n, m;
  cin >> n >> m;
  mat a(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
  mat &b = mat_pow(a, m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << b[i][j] << ' ';
    cout << '\n';
  }
}