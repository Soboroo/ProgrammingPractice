#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  int start = 0;
  int end = *max_element(a.begin(), a.end()) + 1;
  while (start < end - 1) {
    int mid = (start + end) / 2;
    long long count = 0;
    for (int x : a)
      count += x - mid > 0 ? x - mid : 0;
    if (count >= m)
      start = mid;
    else
      end = mid;
  }
  cout << start << endl;
}