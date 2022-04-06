#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (!n) {
    cout << 0;
    return 0;
  }
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  int sum = 0;
  for (int i = round(n * 0.15); i < n - round(n * 0.15); i++)
    sum += a[i];
  cout << round(sum / (n - 2 * round(n * 0.15))) << '\n';
}