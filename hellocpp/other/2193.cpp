#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<ll>> a(n + 1, vector<ll>(2));
  a[1][1] = 1;
  for (int i = 2; i <= n; i++) {
    a[i][0] = a[i - 1][1] + a[i - 1][0];
    a[i][1] = a[i - 1][0];
  }
  cout << a[n][0] + a[n][1] << endl;
}