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

bool isPalindrome(int n) {
  int m = n, r = 0;
  while (m) {
    r = r * 10 + m % 10;
    m /= 10;
  }
  return r == n;
}

int main() {
  int n;
  cin >> n;
  while (true) {
    if (isPrime(n) && isPalindrome(n)) {
      cout << n << endl;
      return 0;
    }
    n++;
  }
}