#include <iostream>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, x;
  long long r = 0;
  cin >> n;
  stack<pair<int, int>> s; // height, index
  for (int i = 0; i < n; i++) {
    cin >> x;
    while (!s.empty() && s.top().first <= x) {
      r += i - s.top().second - 1;
      s.pop();
    }
    s.push({x, i});
  }
  while (!s.empty()) {
    r += n - s.top().second - 1;
    s.pop();
  }
  cout << r << '\n';
}