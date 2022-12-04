#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, t;
  cin >> n >> m;
  vector<int> a(n + m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + m; j++) {
      cin >> t;
      a[i] -= t;
      a[j] += t;
    }
  }
  for (int i = 0; i < n + m; i++) {
    cout << a[i] << " ";
  }
}