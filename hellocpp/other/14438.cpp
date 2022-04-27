#include <climits>
#include <iostream>
#include <vector>
using namespace std;

void init(vector<int> &a, vector<int> &tree, int node, int l, int r) {
  if (l == r) {
    tree[node] = a[l];
    return;
  }
  int mid = (l + r) / 2;
  init(a, tree, node * 2, l, mid);
  init(a, tree, node * 2 + 1, mid + 1, r);
  tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

int query(vector<int> &tree, int node, int l, int r, int i, int j) {
  if (i > r || j < l)
    return INT_MAX;
  if (i <= l && r <= j)
    return tree[node];
  int mid = (l + r) / 2;
  int left = query(tree, node * 2, l, mid, i, j);
  int right = query(tree, node * 2 + 1, mid + 1, r, i, j);
  return min(left, right);
}

void update(vector<int> &tree, int node, int l, int r, int index, int value) {
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
  vector<int> a(n);
  vector<int> tree(4 * n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  init(a, tree, 1, 0, n - 1);
  cin >> m;
  while (m--) {
    int i, j, k;
    cin >> i >> j >> k;
    if (i == 1) {
      update(tree, 1, 0, n - 1, j - 1, k);
    } else {
      int ans = query(tree, 1, 0, n - 1, j - 1, k - 1);
      cout << ans << '\n';
    }
  }
}