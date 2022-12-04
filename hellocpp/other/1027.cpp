#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool isVisible(vector<int> &v, int a, int b) {
  if (a > b)
    swap(a, b);
  for (int i = a + 1; i < b; i++) {
    double c = (double)(v[b] - v[a]) / (b - a) * (i - a);
    if (c < 0)
      c += max(v[a], v[b]);
    else if (c > 0)
      c += min(v[a], v[b]);
    else
      c = v[a];
    if (v[i] >= c)
      return false;
  }
  return true;
}

int main() {
  int n, t;
  cin >> n;
  vector<int> v(n), result(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      result[i] += isVisible(v, i, j);
    }
  }
  cout << *max_element(result.begin(), result.end());
}