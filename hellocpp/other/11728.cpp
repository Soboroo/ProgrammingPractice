#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  for (int i = 0, x = 0, y = 0; i < n + m; i++) {
    if (x == n) {
      while (y < m)
        cout << b[y++] << " ";
      break;
    }
    if (y == m) {
      while (x < n)
        cout << a[x++] << " ";
      break;
    }
    cout << (a[x] < b[y] ? a[x++] : b[y++]) << " ";
  }
}