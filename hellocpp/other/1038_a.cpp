#include <iostream>
using namespace std;

int a(int n) { return a ? 0 : a(n - 1) + 1; }
bool b(int n) { return n < 10 or (n % 100 / 10 - n % 10 > 0 && b(n / 10)); }

int main() {
  int n, m = 0, i = 0;
  cin >> n;
  for (; i <= 9876543210 && n != m; i++) {
    if (b(i)) {
      m++;
    }
  }
  cout << (i == 9876543211 ? -1 : i);
}