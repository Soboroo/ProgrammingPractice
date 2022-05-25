#include <iostream>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, x;
  long long r = 0;
  cin >> n;
  stack<int> s;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    while (!s.empty() && s.top() <= x) {
      r++;
      s.pop();
    }
    s.push(x);
  }
  cout << r + s.size() * (s.size() - 1) / 2;
}