#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using PIV = pair<int, vector<int>>;

bool cmp(PIV &a, PIV &b) {
  for (int i = 0; i < 3; ++i)
    if (a.second[i] != b.second[i])
      return a.second[i] > b.second[i];
  return false;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<PIV> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first;
    v[i].second.resize(3);
    for (int j = 0; j < 3; ++j)
      cin >> v[i].second[j];
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0, o = 1; i < n; ++i) {
    if (i && v[i].second != v[i - 1].second)
      o = i + 1;
    if (v[i].first == k) {
      cout << o << endl;
      return 0;
    }
  }
}