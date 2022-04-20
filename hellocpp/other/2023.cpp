#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

void backtrace(int n, int k) {
  if (n < pow(10, k) && n > pow(10, k - 1))
    cout << n << endl;
  else
    for (int i = 0; i < 10; i++)
      if (isPrime(n * 10 + i))
        backtrace(n * 10 + i, k);
}

int main() {
  int n;
  cin >> n;
  backtrace(0, n);
  return 0;
}
