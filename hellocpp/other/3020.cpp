#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a, b;
  for (int i = 0; i < n; i++) {
    if (i & 1) {
      int x;
      cin >> x;
      a.push_back(x);
    } else {
      int x;
      cin >> x;
      b.push_back(x);
    }
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < n / 2; i++) {
    cout << a[i] << " ";
  }
  cout << '\n';
  for (int i = 0; i < n / 2; i++) {
    cout << b[i] << " ";
  }
}