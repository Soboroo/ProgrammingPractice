#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, x;
  cin >> n;
  vector<ll> v(n);
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> x;
    ans += x;
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++)
    ans += v[i] * (i + 1);
  cout << ans << endl;
}