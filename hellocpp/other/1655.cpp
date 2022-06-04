#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < n; i++) {
    cin >> x;
    pq.push(x);
    stack<int> st;
    for (int j = 0; j < i / 2; j++) {
      st.push(pq.top());
      pq.pop();
    }
    cout << pq.top() << '\n';
    while (!st.empty()) {
      pq.push(st.top());
      st.pop();
    }
  }
}