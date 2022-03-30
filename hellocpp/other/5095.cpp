#include <iostream>
#include <vector>
using namespace std;
#define mat vector<vector<int>>
#define ll long long

mat mat_mul(mat &a, mat &b, int mod) {
  mat c(a.size(), vector<int>(b[0].size(), 0));
  for (int i = 0; i < a.size(); i++)
    for (int j = 0; j < b.size(); j++)
      for (int k = 0; k < b[0].size(); k++)
        c[i][k] = (c[i][k] + (ll)a[i][j] * b[j][k]) % mod;
  return c;
}

mat mat_pow(mat &a, ll n, int mod) {
  if (n == 1) {
    mat b = mat(a.size(), vector<int>(a[0].size(), 0));
    for (int i = 0; i < a.size(); i++)
      for (int j = 0; j < a[0].size(); j++)
        b[i][j] = a[i][j] % mod;
    return b;
  }
  mat b = mat_pow(a, n / 2, mod);
  b = mat_mul(b, b, mod);
  if (n & 1)
    b = mat_mul(b, a, mod);
  return b;
}

int main() {
  while (true) {
    int n, m, p;
    cin >> n >> m >> p;
    if (n == 0 && m == 0 && p == 0)
      break;
    mat a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        cin >> a[i][j];
    mat b = mat_pow(a, p, m);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
        cout << b[i][j] << " ";
      cout << '\n';
    }
    cout << '\n';
  }
}