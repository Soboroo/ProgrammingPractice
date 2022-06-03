#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll query(vector<ll> &tree, int l, int r, int node, int ql, int qr) {
  if (ql <= l && r <= qr)
    return tree[node];
  int mid = (l + r) / 2;
  if (qr <= mid)
    return query(tree, l, mid, node * 2, ql, qr);
  if (ql > mid)
    return query(tree, mid + 1, r, node * 2 + 1, ql, qr);
  return query(tree, l, mid, node * 2, ql, qr) +
         query(tree, mid + 1, r, node * 2 + 1, ql, qr);
}

void update(vector<ll> &tree, int l, int r, int node, int pos, ll val) {
  if (l == r) {
    tree[node] = val;
    return;
  }
  int mid = (l + r) / 2;
  if (pos <= mid)
    update(tree, l, mid, node * 2, pos, val);
  else
    update(tree, mid + 1, r, node * 2 + 1, pos, val);
  tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int main() {
  cout.tie(0);
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<ll> tree(n * 4);
  while (m--) {
    int op, x, y;
    cin >> op >> x >> y;
    if (op == 1) {
      update(tree, 0, n - 1, 1, x - 1, y);
    } else {
      if (x > y)
        swap(x, y);
      cout << query(tree, 0, n - 1, 1, x - 1, y - 1) << '\n';
    }
  }
}