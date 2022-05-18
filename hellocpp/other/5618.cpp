#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, max = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    if (v[i] > max)
      max = v[i];
  }
  for (int i = 1; i <= max; ++i) {
    bool flag = true;
    for (int j = 0; j < n; ++j) {
      if (v[j] % i) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << i << '\n';
    }
  }
}