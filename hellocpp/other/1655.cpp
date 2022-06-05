#include <cmath>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> q1;
  priority_queue<int> q2;
  // vector<int> res;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (q1.empty() || q1.top() < x) {
      q1.push(x);
    } else {
      q2.push(x);
    }
    if (abs((int)(q1.size() - q2.size())) > 1) {
      if (q1.size() > q2.size()) {
        q2.push(q1.top());
        q1.pop();
      } else {
        q1.push(q2.top());
        q2.pop();
      }
    }
    if (q1.empty()) {
      cout << q2.top() << '\n';
      // res.push_back(q2.top());
    } else if (q2.empty()) {
      cout << q1.top() << '\n';
      // res.push_back(q1.top());
    } else {
      cout << min(q1.top(), q2.top()) << '\n';
      // res.push_back(min(q1.top(), q2.top()));
    }
  }
  /*
  // print q1, q2
  while (!q1.empty()) {
    cout << q1.top() << " ";
    q1.pop();
  }
  cout << endl;
  while (!q2.empty()) {
    cout << q2.top() << " ";
    q2.pop();
  }
  cout << endl;
  // print res
  for (auto x : res) {
    cout << x << " ";
  }
  */
}