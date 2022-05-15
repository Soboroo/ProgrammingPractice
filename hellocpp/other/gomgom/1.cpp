#include <iostream>
using namespace std;

int main() {
  int x, y, z, r = 0;
  cin >> x >> y >> z;
  cout << min(y / 2 + z, x) << endl;
}