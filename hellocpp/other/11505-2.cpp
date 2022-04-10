// segment tree for cumulative multiplication
// Language: cpp

#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void init(vector<int> &a, vector<int> &tree, int n, int l, int r) {
  if (l == r) {
    tree[n] = a[l];
  } else {
    int mid = (l + r) / 2;
    init(a, tree, n * 2, l, mid);
    init(a, tree, n * 2 + 1, mid + 1, r);
    tree[n] = tree[n * 2] * tree[n * 2 + 1] % MOD;
  }
}

int query(vector<int> &tree, int n, int l, int r, int i, int j) {
  if (l > j || r < i) {
    return 1;
  }
  if (i <= l && r <= j) {
    return tree[n];
  }
  int mid = (l + r) / 2;
  return query(tree, n * 2, l, mid, i, j) *
         query(tree, n * 2 + 1, mid + 1, r, i, j) % MOD;
}

void update(vector<int> &tree, int n, int l, int r, int i, int val) {
  if (l == r) {
    tree[n] = val;
  } else {
    int mid = (l + r) / 2;
    update(tree, n * 2, l, mid, i, val);
    update(tree, n * 2 + 1, mid + 1, r, i, val);
    tree[n] = tree[n * 2] * tree[n * 2 + 1] % MOD;
  }
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  m += k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> tree(4 * n);
  init(a, tree, 1, 0, n - 1);
  for (int i = 0; i < m; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == 1) {
      update(tree, 1, 0, n - 1, y - 1, z);
    } else {
      cout << query(tree, 1, 0, n - 1, y - 1, z - 1) << endl;
    }
  }
  return 0;
}
