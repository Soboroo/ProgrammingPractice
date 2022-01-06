#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  priority_queue<int, vector<int>, greater<int>> pq;
  int n, x;
  cin >> n;
  for (int i = 0; i < n * n; i++) {
    cin >> x;
    pq.push(x);
    if (pq.size() > n) {
      pq.pop();
    }
  }
  cout << pq.top() << endl;
}