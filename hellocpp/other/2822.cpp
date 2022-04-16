#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<pair<int, int>> a(8);
  for (int i = 0; i < 8; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(), a.end(), greater<pair<int, int>>());
  int sum = 0;
  vector<int> t(5);
  for (int i = 0; i < 5; i++) {
    sum += a[i].first;
    t[i] = a[i].second;
  }
  sort(t.begin(), t.end());
  cout << sum << '\n';
  for (int i = 0; i < 5; i++)
    cout << t[i] + 1 << " ";
}