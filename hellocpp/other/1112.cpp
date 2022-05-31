#include <iostream>
#include <string>
using namespace std;

int main() {
  int x, b;
  cin >> x >> b;
  string s;
  if (x == 0) {
    cout << "0";
  } else {
    bool flag = x < 0 && b > 0;
    if (flag)
      x = -x;
    while (x != 0) {
      int r = x % b;
      x /= b;
      if (r < 0) {
        r += abs(b);
        x++;
      }
      s = char(r + '0') + s;
    }
    cout << (flag ? "-" : "") << s;
  }
}