#include <iostream>
using namespace std;

int foo(int n) { return n ? n % 10 + foo(n / 10) : 0; }

int main() {
  int n, s = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
    if (i % foo(i) == 0)
      s++;
  cout << s;
}