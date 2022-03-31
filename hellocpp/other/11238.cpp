#include <iostream>
#include <vector>
using namespace std;
#define mat vector<vector<int>>
#define ll long long

mat mat_mul(mat &a, mat &b) {
  mat c(a.size(), vector<int>(b[0].size(), 0));
  for (int i = 0; i < a.size(); i++)
    for (int j = 0; j < b.size(); j++)
      for (int k = 0; k < b[0].size(); k++)
        c[i][k] = (c[i][k] + (ll)a[i][j] * b[j][k]) % 1000000007;
  return c;
}

mat mat_pow(mat &a, ll n) {
  if (n == 1) {
    mat b = mat(a.size(), vector<int>(a[0].size(), 0));
    for (int i = 0; i < a.size(); i++)
      for (int j = 0; j < a[0].size(); j++)
        b[i][j] = a[i][j] % 1000000007;
    return b;
  }
  mat b = mat_pow(a, n / 2);
  b = mat_mul(b, b);
  if (n & 1)
    b = mat_mul(b, a);
  return b;
}

int fibo(int n) {
  mat a(2, vector<int>(2, 0));
  a[0][0] = 1;
  a[0][1] = 1;
  a[1][0] = 1;
  a[1][1] = 0;
  mat b = mat_pow(a, n);
  return b[0][1];
}

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    cout << gcd(fibo(a), fibo(b)) << '\n';
  }
}