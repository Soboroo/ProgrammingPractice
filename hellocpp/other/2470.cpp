#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  int idx1 = 0, idx2 = n - 1, x, y, res = 1000000000;
  while (idx1 < idx2) {
    if (a[idx1] + a[idx2] < res)
      res = a[idx1] + a[idx2];
    if (a[idx1] < a[idx2])
      idx1++;
    else
      idx2--;
  }
}