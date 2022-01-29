#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[2] = {0, 1};
  for (int i = 0; i < n; i++) {
    a[i % 2] += a[(i + 1) % 2];
  }
  cout << a[n % 2] << endl;
}