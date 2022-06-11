#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v = {0, 1};
  for (int i = 1; i <= abs(n); i++) {
    int t = v[0];
    v[0] = v[1];
    v[1] = (t + v[1]) % 1000000000;
  }
  if (v[0] == 0) {
    cout << "0" << endl;
  } else {
    cout << (n < 0 && abs(n) % 2 == 0 ? -1 : 1) << endl;
  }
  cout << v[0] << endl;
}