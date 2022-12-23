#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, x, r = 0;
  cin >> n;
  priority_queue<int> pq;
  for (int i = 0; i < n; i++) {
    cin >> x;
    pq.push(x);
  }
  while (pq.size() > 1 && r <= 1440) {
    int a = pq.top();
    pq.pop();
    int b = pq.top();
    pq.pop();
    int m = min(a, b);
    r += m;
    if (abs(a - b) > 0)
      pq.push(abs(a - b));
  }
  if (!pq.empty())
    r += pq.top();
  if (r > 1440)
    cout << -1;
  else
    cout << r;
  return 0;
}