#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &r, vector<int> &c, int n) {
  if (r.size() == n) {
    for (auto i : r)
      cout << i << " ";
    cout << '\n';
    return;
  }
  for (int i = 0; i < c.size(); i++) {
    r.push_back(c[i]);
    solve(r, c, n);
    r.pop_back();
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n), c;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  solve(c, v, m);
}