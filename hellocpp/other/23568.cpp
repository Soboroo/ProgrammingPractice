#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, i, k;
  char j;
  cin >> n;
  map<int, pair<char, int>> m;
  while (n--) {
    cin >> i >> j >> k;
    m[i] = make_pair(j, k);
  }
  cin >> i;
  while (m.find(i) != m.end()) {
    if (m[i].first == 'L') {
      i -= m[i].second;
    } else {
      i += m[i].second;
    }
  }
  cout << i;
}