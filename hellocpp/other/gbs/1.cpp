#include <iostream>
using namespace std;

int main() {
  int n, m = 0, index;
  cin >> n;
  if (n >= 200 && n < 206)
    cout << 1;
  else if (n >= 206 && n < 218)
    cout << 2;
  else if (n >= 217 && n < 229)
    cout << 3;
  else
    cout << 4;
}