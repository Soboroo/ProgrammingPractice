#include <iostream>
using namespace std;

int main() {
  int n, k, i = 1;
  cin >> n >> k;
  while (k) {
    k = n % i ? k : k - 1;
    if (k)
      i++;
    if (i > n) {
      cout << 0;
      return 0;
    }
  }
  cout << i;
}