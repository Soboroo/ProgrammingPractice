#include <iostream>
#include <string>
using namespace std;

int main() {
  int sum = 0;
  auto sumfunc = [&sum](int x, int y) { sum = x + y; };
  sumfunc(3, 4);
  cout << "합은 " << sum;
}