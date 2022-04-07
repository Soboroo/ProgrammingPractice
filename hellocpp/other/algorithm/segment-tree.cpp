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

void update(vector<ll> &tree, int node, int start, int end, int index,
            ll value) {
  if (start == end) {
    tree[node] = value;
  } else {
    int mid = (start + end) / 2;
    if (index <= mid) {
      update(tree, node * 2, start, mid, index, value);
    } else {
      update(tree, node * 2 + 1, mid + 1, end, index, value);
    }
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
  }
}

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<ll> tree(4 * n);
  init(a, tree, 1, 0, n - 1);
}