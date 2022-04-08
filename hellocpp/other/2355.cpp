#include <iostream>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  if (a > b)
    swap(a, b);
  a--;
  cout << b * (b + 1) / 2 - a * (a + 1) / 2;
}