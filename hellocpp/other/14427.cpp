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
  tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

II query(vector<II> &tree, int node, int l, int r, int i, int j) {
  if (i > r || j < l)
    return {INT_MAX, -1};
  if (i <= l && r <= j)
    return tree[node];
  int mid = (l + r) / 2;
  II left = query(tree, node * 2, l, mid, i, j);
  II right = query(tree, node * 2 + 1, mid + 1, r, i, j);
  if (left.first == INT_MAX)
    return right;
  if (right.first == INT_MAX)
    return left;
  return min(left, right);
}

void update(vector<II> &tree, int node, int l, int r, int index, II value) {
  if (index < l || index > r)
    return;
  if (l == r) {
    tree[node] = value;
    return;
  }
  int mid = (l + r) / 2;
  update(tree, node * 2, l, mid, index, value);
  update(tree, node * 2 + 1, mid + 1, r, index, value);
  tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n;
  vector<II> a(n);
  vector<II> tree(4 * n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }
  init(a, tree, 1, 0, n - 1);
  cin >> m;
  while (m--) {
    int k;
    cin >> k;
    if (k == 1) {
      int i, j;
      cin >> i >> j;
      update(tree, 1, 0, n - 1, i - 1, {j, i});
    } else {
      cout << query(tree, 1, 0, n - 1, 0, n - 1).second << '\n';
    }
  }
}