#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n;
  cin >> n;
  stack<int> s, d, r;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    s.push(tmp);
  }
  for (int i = 0; i < n; i++) {
    int t = s.top();
    s.pop();
    while (!d.empty() && d.top() <= t)
      d.pop();
    r.push(d.empty() ? -1 : d.top());
    d.push(t);
  }
  while (!r.empty()) {
    cout << r.top() << " ";
    r.pop();
  }
}