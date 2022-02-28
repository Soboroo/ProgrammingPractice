#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using mat = vector<vector<int>>;

mat mat_mul(mat &a, mat &b) {
  mat c(a.size(), vector<int>(b[0].size(), 0));
  for (int i = 0; i < a.size(); i++)
    for (int j = 0; j < b.size(); j++)
      for (int k = 0; k < b[0].size(); k++)
        c[i][k] = (c[i][k] + (ll)a[i][j] * b[j][k]) % 1000;
  return c;
}

mat &mat_pow(mat &a, ll n) {
  if (n == 1) {
    static mat b = *new mat(a.size(), vector<int>(a[0].size(), 0));
    for (int i = 0; i < a.size(); i++)
      for (int j = 0; j < a[0].size(); j++)
        b[i][j] = a[i][j] % 1000;
    return b;
  }
  mat &b = mat_pow(a, n / 2);
  b = mat_mul(b, b);
  if (n & 1)
    b = mat_mul(b, a);
  return b;
}

int main() {
  ll n, k;
  cin >> n >> k;
  mat a(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];

  mat b(n, vector<int>(n));
  for (ll i = 1; i <= k; i++) {
    mat &t = mat_pow(a, i);
    for (int j = 0; j < n; j++)
      for (int k = 0; k < n; k++)
        b[j][k] = (b[j][k] + t[j][k]) % 1000;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << b[i][j] << " ";
    cout << '\n';
  }
}