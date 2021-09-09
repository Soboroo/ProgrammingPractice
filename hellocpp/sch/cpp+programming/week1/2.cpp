#include <iostream>
using namespace std;

int main() {
  int c = (6 + 10, 6 - 10); //뒤에 것으로 해석됩니다~~~
  cout << c << endl;
  return 0;
}