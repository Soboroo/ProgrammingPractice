#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, y = 0, m = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double t;
    cin >> t;
    y += floor(t / 30) * 10 + 10;
    m += floor(t / 60) * 15 + 15;
  }
  if (y > m)
    cout << "M " << m;
  else if (y < m)
    cout << "Y " << y;
  else
    cout << "Y M " << y;
}