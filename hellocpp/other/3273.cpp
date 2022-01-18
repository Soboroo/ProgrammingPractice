#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  cin >> m;
  int x = 0, y = n - 1, result = 0;
  while (x < y) {
    if (a[x] + a[y] == m) {
      result++;
      x++;
      y--;
    } else if (a[x] + a[y] < m)
      x++;
    else
      y--;
  }
  cout << result << endl;
}