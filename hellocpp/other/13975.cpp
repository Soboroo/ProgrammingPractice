#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++) {
      ll x;
      cin >> x;
      pq.push(x);
    }
    ll ans = 0;
    while (pq.size() > 1) {
      ll x = pq.top();
      pq.pop();
      ll y = pq.top();
      pq.pop();
      ans += x + y;
      pq.push(x + y);
    }
    cout << ans << '\n';
  }
}