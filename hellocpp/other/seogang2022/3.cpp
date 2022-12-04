#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string a, t;
  cin >> a;
  int n, x, y, z;
  cin >> n;
  vector<string> v;
  while (n--) {
    cin >> t;
    x += t[0] == a[0];
    y += t[0] == a[1];
    z += t[0] == a[2];
  }
  cout << (long long)x * y * z << endl;
}