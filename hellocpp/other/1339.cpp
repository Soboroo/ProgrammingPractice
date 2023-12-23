#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int solve(vector<string> &v, map<char, int> &m, int n) {
  if (n == m.size()) {
    int sum = 0;
    for (auto &s : v) {
      for (auto &c : s) {
        c = m[c] + '0';
      }
      sum += stoi(s);
    }
    return sum;
  } else {
    int sum = 0;
    for (int i = 9; i > 9 - m.size(); i--) {
      bool ok = true;
      for (auto &p : m) {
        if (p.second == i) {
          ok = false;
          break;
        }
      }
      if (ok) {
        m[v[0][n]] = i;
        sum += solve(v, m, n + 1);
        m.erase(v[0][n]);
      }
    }
    return sum;
  }
}

int main() {
  int n;
  cin >> n;
  vector<string> v(n);
  map<char, int> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v[i] = s;
    for (auto &c : s)
      m[c] = 0;
  }
  int ans = 0;
}