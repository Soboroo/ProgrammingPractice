#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  int ans = 0, l = 0, r = 0;
  for (int i = 0; i < n + 1; i++) {
    if (i < n && v[i].first <= r && v[i].first >= l) {
      r = max(r, v[i].second);
    } else {
      ans += r - l;
      if (i < n) {
        l = v[i].first;
        r = v[i].second;
      }
    }
  }
  cout << ans << '\n';
}