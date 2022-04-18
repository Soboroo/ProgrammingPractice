#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n - k + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < k; i++) {
    b[0] += a[i];
  }
  for (int i = 1; i < n - k + 1; i++) {
    b[i] = b[i - 1] - a[i - 1] + a[i + k - 1];
  }
  cout << *max_element(b.begin(), b.end()) << endl;
}