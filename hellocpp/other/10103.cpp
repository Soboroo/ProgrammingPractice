#include <iostream>
using namespace std;

int main() {
  int n, a, b, x = 100, y = 100;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    if (a < b)
      x -= b;
    else if (a > b)
      y -= a;
  }
  cout << x << '\n' << y;
}