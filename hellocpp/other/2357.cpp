#include <climits>
#include <iostream>
#include <vector>
using namespace std;
using II = pair<int, int>;

void init(vector<II> &a, vector<II> &tree, int node, int l, int r) {
  if (l == r) {
    tree[node] = a[l];
    return;
  }
  int mid = (l + r) / 2;
  init(a, tree, node * 2, l, mid);
  init(a, tree, node * 2 + 1, mid + 1, r);
  tree[node] = {min(tree[node * 2].first, tree[node * 2 + 1].first),
                max(tree[node * 2].second, tree[node * 2 + 1].second)};
}

II query(vector<II> &tree, int node, int l, int r, int i, int j) {
  if (i > r || j < l)
    return {INT_MAX, INT_MIN};
  if (i <= l && r <= j)
    return tree[node];
  int mid = (l + r) / 2;
  II left = query(tree, node * 2, l, mid, i, j);
  II right = query(tree, node * 2 + 1, mid + 1, r, i, j);
  return {min(left.first, right.first), max(left.second, right.second)};
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<II> a(n);
  vector<II> tree(4 * n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = a[i].first;
  }
  init(a, tree, 1, 0, n - 1);
  while (m--) {
    int i, j;
    cin >> i >> j;
    II t = query(tree, 1, 0, n - 1, i - 1, j - 1);
    cout << t.first << " " << t.second << '\n';
  }
}