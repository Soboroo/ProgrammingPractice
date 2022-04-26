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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> tree(4 * n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  init(a, tree, 1, 0, n - 1);
  while (m--) {
    int i, j;
    cin >> i >> j;
    cout << query(tree, 1, 0, n - 1, i - 1, j - 1) << '\n';
  }
}