#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007
vector<vector<int>> mat_mul(const vector<vector<int>> &a,
                            const vector<vector<int>> &b) {
  vector<vector<int>> res(a.size(), vector<int>(b[0].size(), 0));
  for (int i = 0; i < a.size(); i++)
    for (int j = 0; j < b.size(); j++)
      for (int k = 0; k < b[0].size(); k++)
        res[i][k] = (res[i][k] + (long long)a[i][j] * b[j][k]) % MOD;
  return res;
}

vector<vector<int>> &fibo_mat(long long n) {
  if (n == 1) {
    static vector<vector<int>> a(2, vector<int>(2, 1));
    a[1][1] = 0;
    return a;
  }
  vector<vector<int>> &a = fibo_mat(n / 2);
  a = mat_mul(a, a);
  if (n % 2 == 1) {
    vector<vector<int>> b(2, vector<int>(2, 1));
    b[1][1] = 0;
    a = mat_mul(a, b);
  }
  return a;
}

int main() {
  long long n;
  cin >> n;
  vector<vector<int>> a = fibo_mat(n);
  cout << a[0][1] << '\n';
}