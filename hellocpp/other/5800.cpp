#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> v(n), v2(n - 1);
    for (int j = 0; j < n; j++) {
      cin >> v[j];
    }
    sort(v.begin(), v.end());
    for (int j = 0; j < n - 1; j++) {
      v2[j] = v[j + 1] - v[j];
    }
    sort(v2.begin(), v2.end());
    cout << "Class " << i + 1 << '\n'
         << "Max " << v[n - 1] << ", Min " << v[0] << ", Largest gap "
         << v2[n - 2] << '\n';
  }
}