#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> &set, int x) {
  return set[x] < 0 ? x : set[x] = find(set, set[x]);
}

void union_set(vector<int> &set, int x, int y) {
  x = find(set, x);
  y = find(set, y);

  if (x != y) {
    if (set[x] < set[y]) {
      set[x] += set[y];
      set[y] = x;
    } else {
      set[y] += set[x];
      set[x] = y;
    }
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<int> set(n, -1);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      if (x == 1)
        union_set(set, i, j);
    }
  }
  int l, r;
  cin >> l;
  l--;
  m--;
  while (m--) {
    cin >> r;
    r--;
    if (find(set, l) != find(set, r)) {
      cout << "NO\n";
      return 0;
    }
    l = r;
  }
  cout << "YES\n";
}