#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x = 0;
  vector<int> v(5);
  for (int i = 0; i < 5; i++) {
    cin >> v[i];
    x += v[i];
  }
  sort(v.begin(), v.end());
  cout << x / 5 << '\n' << v[2];
}