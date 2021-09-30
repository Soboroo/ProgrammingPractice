#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  for (int i = 1; i <= 10000; i++, sum += i % 2 ? i : 0)
    ;
  cout << sum;
  return 0;
}