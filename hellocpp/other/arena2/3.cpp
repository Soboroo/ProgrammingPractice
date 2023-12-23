#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &v, int i) {
  v[i] *= 2;
  int mn = v[0], mx = v[0];
  for (int j = 1; j < v.size(); j++) {
    mn = min(mn, v[j]);
    mx = max(mx, v[j]);
  }
  v[i] /= 2;
  return mx - mn;
}

int solve(vector<int> &v) {
  int res = INT_MAX, idx;
  int mn = v[0], mx = v[0];
  for (int j = 1; j < v.size(); j++) {
    mn = min(mn, v[j]);
    mx = max(mx, v[j]);
  }
  for (int i = 0; i < v.size(); i++) {
    if (res > solution(v, i)) {
      res = solution(v, i);
      idx = i;
    }
  }
  if (res < mx - mn) {
    v[idx] *= 2;
    return solve(v);
  } else {
    return res;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v[i] = x;
  }
  cout << solve(v);
}