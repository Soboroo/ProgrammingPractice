#include <iostream>
using namespace std;

int main() {
  int g, b, s;
  cin >> g >> b >> s;
  while (s--) {
    if (g / b >= 2) {
      g--;
    } else {
      b--;
    }
  }
  cout << min(g / 2, b) << endl;
  return 0;
}