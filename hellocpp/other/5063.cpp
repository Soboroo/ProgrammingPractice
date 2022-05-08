#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;
    y -= z;
    if (x > y)
      cout << "do not advertise\n";
    else if (x < y)
      cout << "advertise\n";
    else
      cout << "does not matter\n";
  }
}