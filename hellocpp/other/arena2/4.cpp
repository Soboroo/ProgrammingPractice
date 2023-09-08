#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  ll n, res = 0;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    vector<int> s(n), m(n);
    s[i] = v[i];
    m[i] = v[i];
    for (int j = i + 1; j < n; j++) {
      s[j] = s[j - 1] + v[j];
      m[j] = m[j - 1] * v[j];
      if (s[j] == m[j]) {
        res++;
      }
    }
    res++;
  }
  cout << res;
}