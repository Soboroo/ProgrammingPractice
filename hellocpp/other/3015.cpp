#include <iostream>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, r = 0;
  cin >> n;
  stack<pair<int, int>> s;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    while (!s.empty() && s.top().first <= x) {
      r += i - s.top().second - 1;
      s.pop();
    }
    s.push(make_pair(x, i));
  }
  cout << r << endl;
}