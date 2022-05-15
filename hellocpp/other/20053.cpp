#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    vector<int> v;
    int n;
    cin >> n;
    while (n--) {
      int x;
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[0] << ' ' << v[v.size() - 1] << '\n';
  }
}