#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  n = ceil(sqrt(n)) - 1, m = sqrt(m);
  if (m = m * (m + 1) * (2 * m + 1) / 6 - n * (n + 1) * (2 * n + 1) / 6)
    cout << m << '\n' << (n + 1) * (n + 1) << '\n';
  else
    cout << -1;
}