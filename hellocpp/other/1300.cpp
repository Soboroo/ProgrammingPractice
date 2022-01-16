#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      a.push_back(i * j);
    }
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << ' ';
  }
}