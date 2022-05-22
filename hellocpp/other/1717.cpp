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
  vector<int> set(n + 1, -1);
  while (m--) {
    int f, x, y;
    cin >> f >> x >> y;
    if (f == 0)
      union_set(set, x, y);
    else
      cout << (find(set, x) == find(set, y) ? "YES\n" : "NO\n");
  }
}