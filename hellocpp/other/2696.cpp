#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> res;
    while (n--) {
      cin >> x;
      pq.push(x);
      if (n % 2 == 0) {
        stack<int> s;
        int tmp = pq.size();
        for (int i = 0; i < tmp / 2; i++) {
          s.push(pq.top());
          pq.pop();
        }
        res.push_back(pq.top());
        while (s.size()) {
          pq.push(s.top());
          s.pop();
        }
      }
    }
    cout << res.size() << '\n';
    for (int i = 0; i < res.size(); i++) {
      cout << res[i] << ' ';
      if (i % 10 == 9)
        cout << '\n';
    }
    if (res.size() % 10 != 0)
      cout << '\n';
  }
}