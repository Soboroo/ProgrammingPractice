#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void init(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
  if (start == end) {
    tree[node] = a[start];
  } else {
    int mid = (start + end) / 2;
    init(a, tree, node * 2, start, mid);
    init(a, tree, node * 2 + 1, mid + 1, end);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
  }
}

ll query(vector<ll> &tree, int node, int start, int end, int l, int r) {
  if (l > end || r < start) {
    return 0;
  }
  if (l <= start && end <= r) {
    return tree[node];
  }
  int mid = (start + end) / 2;
  return query(tree, node * 2, start, mid, l, r) +
         query(tree, node * 2 + 1, mid + 1, end, l, r);
}

void update(vector<ll> &a, vector<ll> &tree, int node, int start, int end,
            int index, ll value) {
  if (index < start || index > end) {
    return;
  }
  if (start == end) {
    tree[node] = value;
    a[index] = value;
    return;
  }
  int mid = (start + end) / 2;
  update(a, tree, node * 2, start, mid, index, value);
  update(a, tree, node * 2 + 1, mid + 1, end, index, value);
  tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n, m, k;
  cin >> n >> m >> k;
  m += k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<ll> tree(1 << ((int)ceil(log2(n)) + 1));
  init(a, tree, 1, 0, n - 1);
  for (int i = 0; i < m; i++) {
    ll x, y, z;
    cin >> x >> y >> z;
    if (x == 1) {
      update(a, tree, 1, 0, n - 1, y - 1, z);
    } else {
      cout << query(tree, 1, 0, n - 1, y - 1, z - 1) << '\n';
    }
  }
  return 0;
}