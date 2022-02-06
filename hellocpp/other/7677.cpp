#include <iostream>
#include <vector>
using namespace std;
#define MOD 10000
using mat = vector<vector<int>>;
using ll = long long;

mat mat_mul(const mat &a, const mat &b) {
  mat res(a.size(), vector<int>(b[0].size(), 0));
  for (int i = 0; i < a.size(); i++)
    for (int j = 0; j < b.size(); j++)
      for (int k = 0; k < b[0].size(); k++)
        res[i][k] = (res[i][k] + (ll)a[i][j] * b[j][k]) % MOD;
  return res;
}

mat &fibo_mat(ll n) {
  if (n < 2) {
    mat *a = new mat(2, vector<int>(2, 1));
    a->at(n).at(1) = 0;
    return *a;
  }
  mat &a = fibo_mat(n / 2);
  a = mat_mul(a, a);
  if (n % 2 == 1) {
    mat b(2, vector<int>(2, 1));
    b[1][1] = 0;
    a = mat_mul(a, b);
  }
  return a;
}

int main() {
  while (true) {
    ll n;
    cin >> n;
    if (n == -1)
      break;
    cout << fibo_mat(n)[0][1] << '\n';
  }
}