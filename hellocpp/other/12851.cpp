#include <bits/stdc++.h>
using namespace std;

bool visited[100001] = {false};
int parent[100001] = {0};
bool isVaild(int x) { return x >= 0 && x <= 100000 && !visited[x]; }

void print(int x) {
  if (x == 0)
    return;
  print(parent[x]);
  cout << x << ' ';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  queue<pair<int, int>> q;
  q.push({n, 0});
  visited[n] = true;
  if (n == m) {
    cout << 0 << '\n' << 1 << '\n';
    return 0;
  }
  while (!q.empty()) {
    int x = q.front().first;
    int t = q.front().second;
    q.pop();
    if (x == m) {
      cout << t << '\n';
      print(x);
      return 0;
    }
    visited[x] = true;
    if (isVaild(x - 1)) {
      q.push({x - 1, t + 1});
      parent[x - 1] = x;
    }
    if (isVaild(x + 1)) {
      q.push({x + 1, t + 1});
      parent[x + 1] = x;
    }
    if (isVaild(x * 2)) {
      q.push({x * 2, t + 1});
      parent[x * 2] = x;
    }
  }
}