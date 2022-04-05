#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> query(n);
  for (int i = 0; i < n; i++)
    cin >> query[i];
  for (int i = 0; i < m; i++) {
    int func;
    cin >> func;
    if (func == 1) {
      int a, b;
      long long s = 0;
      cin >> a >> b;
      for (int i = a - 1; i < b; i++)
        s += query[i];
      cout << s << '\n';
      swap(query[a - 1], query[b - 1]);
    } else if (func == 2) {
      int a, b, x, y;
      long long s = 0;
      cin >> a >> b >> x >> y;
      for (int i = a - 1; i < b; i++)
        s += query[i];
      for (int i = x - 1; i < y; i++)
        s -= query[i];
      cout << s << '\n';
    }
  }
}