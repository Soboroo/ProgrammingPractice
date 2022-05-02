#include <iostream>
#include <vector>
using namespace std;

// 2 dimensional segment tree
template <typename T> class segment_tree {
public:
  segment_tree(int n) : n(n) {
    tree.resize(4 * n);
    build(1, 0, n - 1);
  }

  void build(int node, int l, int r) {
    if (l == r) {
      tree[node] = 0;
      return;
    }
    int mid = (l + r) / 2;
    build(node * 2, l, mid);
    build(node * 2 + 1, mid + 1, r);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
  }

  void update(int node, int l, int r, int i, int j, T val) {
    if (i > r || j < l)
      return;
    if (i <= l && r <= j) {
      tree[node] += val;
      return;
    }
    int mid = (l + r) / 2;
    update(node * 2, l, mid, i, j, val);
    update(node * 2 + 1, mid + 1, r, i, j, val);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
  }

  T query(int node, int l, int r, int i, int j) {
    if (i > r || j < l)
      return 0;
    if (i <= l && r <= j)
      return tree[node];
    int mid = (l + r) / 2;
    return query(node * 2, l, mid, i, j) +
           query(node * 2 + 1, mid + 1, r, i, j);
  }

private:
  int n;
  vector<T> tree;
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  segment_tree<int> st(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      st.update(1, 0, n - 1, i, j, a[i][j]);
    }
  }
  while (m--) {
    int i, j, k;
    cin >> i >> j >> k;
    if (i == 1) {
      st.update(1, 0, n - 1, j - 1, k - 1, 1);
    } else {
      cout << st.query(1, 0, n - 1, j - 1, k - 1) << '\n';
    }
  }
}