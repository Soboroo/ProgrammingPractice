#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void init(vector<int> &a, vector<int> &tree, int node, int l, int r) {
  if (l == r) {
    tree[node] = a[l];
    return;
  }
  int mid = (l + r) / 2;
  init(a, tree, node * 2, l, mid);
  init(a, tree, node * 2 + 1, mid + 1, r);
  tree[node] = (tree[node * 2] % MOD) * (tree[node * 2 + 1] % MOD) % MOD;
}

int query(vector<int> &tree, int node, int l, int r, int i, int j) {
  if (i > r || j < l)
    return 1;
  if (i <= l && r <= j)
    return tree[node];
  int mid = (l + r) / 2;
  int left = query(tree, node * 2, l, mid, i, j);
  int right = query(tree, node * 2 + 1, mid + 1, r, i, j);
  return (left % MOD) * (right % MOD) % MOD;
}

void update(vector<int> &a, vector<int> &tree, int node, int l, int r,
            int index, int value) {
  if (index < l || index > r)
    return;
  if (l == r) {
    tree[node] = value;
    return;
  }
  int mid = (l + r) / 2;
  update(a, tree, node * 2, l, mid, index, value);
  update(a, tree, node * 2 + 1, mid + 1, r, index, value);
  tree[node] = (tree[node * 2] % MOD) * (tree[node * 2 + 1] % MOD) % MOD;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n, m, k;
  cin >> n >> m >> k;
  m += k;
  vector<int> a(n);
  vector<int> tree(4 * n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  init(a, tree, 1, 0, n - 1);
  while (m--) {
    int i, j, k;
    cin >> i >> j >> k;
    if (i == 1) {
      update(a, tree, 1, 0, n - 1, j - 1, k);
    } else {
      int ans = query(tree, 1, 0, n - 1, j - 1, k - 1);
      cout << ans << '\n';
    }
  }
}