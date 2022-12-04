#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> x;
    v[i] = x;
  }
  sort(v.begin(), v.end(), greater<int>());
  cout << v[m - 1];
}