#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, x = 0, y = 0;
    for (int i = 0; i < 9; i++) {
      cin >> a >> b;
      x += a;
      y += b;
    }
    if (x > y) {
      cout << "Yonsei" << '\n';
    } else if (x < y) {
      cout << "Korea" << '\n';
    } else {
      cout << "Draw" << '\n';
    }
  }
}