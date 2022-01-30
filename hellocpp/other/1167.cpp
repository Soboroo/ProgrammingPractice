#include <iostream>
#include <vector>
using namespace std;

#if 0
int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> a(n + 1);
  for (int i = 0; i < n; i++) {
    int u, v, w;
    cin >> u;
    for (int j = 0;; j = (j + 1) % 2) {
      int t;
      cin >> t;
      if (t == -1)
        break;
      if (j)
        a[u].push_back(make_pair(v, t));
      else
        v = t;
    }
  }
}
#endif

#define INF 1000000000
int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n + 1, vector<int>(n + 1, INF));

  for (int i = 1; i <= n; i++) {
    a[i][i] = 0;
  }

  for (int i = 0; i < n; i++) {
    int u, v, w;
    cin >> u;
    for (int j = 0;; j = (j + 1) % 2) {
      int t;
      cin >> t;
      if (t == -1)
        break;
      if (j)
        a[u][v] = t;
      else
        v = t;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      cout << (a[i][j] == INF ? -1 : a[i][j]) << " ";
    cout << '\n';
  }
}