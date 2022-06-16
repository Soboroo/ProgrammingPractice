#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve(map<int, int> &a, vector<int> &b, int n) {
  if (b.size() == n) {
    for (int i = 0; i < n; ++i)
      cout << b[i] << " ";
    cout << '\n';
  } else {
    for (auto v : a) {
      b.push_back(v.first);
      solve(a, b, n);
      b.pop_back();
    }
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n, m, x;
  cin >> n >> m;
  map<int, int> a;
  vector<int> b;
  for (int i = 0; i < n; i++) {
    cin >> x;
    a[x]++;
  }
  solve(a, b, m);
}