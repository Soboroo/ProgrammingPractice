#include <iostream>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  if (3 < k) {
    for (int i = 3; i < k; i++) {
      m = m == n ? 1 : m + 1;
    }
  } else if (3 > k) {
    for (int i = 3; i > k; i--) {
      m = m == 1 ? n : m - 1;
    }
  }
  cout << m;
}