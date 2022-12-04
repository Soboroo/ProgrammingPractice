#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (n >= 3 && m >= 7) {
    cout << m - 2 << endl;
  } else if (n >= 3 && m < 7) {
    cout << min(4, m) << endl;
  } else if (n == 2) {
    cout << min(4, (int)ceil(m / 2.0)) << endl;
  } else {
    cout << 1 << endl;
  }
}