#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
void binary_search(ll start, ll end, ll target, vector<ll> &a) {
  if (start >= end - 1) {
    cout << start << endl;
    return;
  }
  ll mid = (start + end) / 2;
  int count = 0;
  for (int x : a)
    count += x / mid;

  if (count >= target)
    binary_search(mid, end, target, a);
  else
    binary_search(start, mid, target, a);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  binary_search(1, *max_element(a.begin(), a.end()) + 1, m, a);
}