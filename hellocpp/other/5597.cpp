#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<bool> v(31);
  int a = 29, n;
  while (--a) {
    cin >> n;
    v[n] = true;
  }
  for (a++; a < 31; a++) {
    if (!v[a])
      cout << a << "\n";
  }
}