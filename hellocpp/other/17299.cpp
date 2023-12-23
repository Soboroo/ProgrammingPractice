#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

struct item {
  int index, value, count;
};

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> res(n, -1);
  queue<int> q;
  map<int, int> m;
  stack<item> s;
  while (n--) {
    int x;
    cin >> x;
    q.push(x);
    m[x]++;
  }
  for (int i = 0; !q.empty(); i++) {
    item c = {i, q.front(), m[q.front()]};
    q.pop();
    while (!s.empty() && s.top().count < c.count) {
      res[s.top().index] = c.value;
      s.pop();
    }
    s.push(c);
  }
  for (auto v : res) {
    cout << v << " ";
  }
}