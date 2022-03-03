#include <iostream>
using namespace std;

int main() {
  int n, b = 0;
  cin >> n;
  for (int i = 5; i <= n; i *= 5)
    b += n / i;
  cout << b;
}