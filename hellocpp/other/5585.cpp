#include <iostream>
using namespace std;

int main() {
  int a, b[] = {500, 100, 50, 10, 5, 1}, c = 0;
  cin >> a;
  a = 1000 - a;
  for (int i = 0; i < 6; i++) {
    c += a / b[i];
    a %= b[i];
  }
  cout << c << endl;
  return 0;
}