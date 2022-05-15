#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  if (s[0] == t[0] && s[n - 1] == t[n - 1]) {
    map<char, int> m, tm;
    for (int i = 0; i < n; i++) {
      m[s[i]]++;
      tm[t[i]]++;
    }
    if (m == tm) {
      vector<char> amogus = {'a', 'i', 'u', 'e', 'o'};
      for (auto &c : amogus) {
        s.erase(remove(s.begin(), s.end(), c), s.end());
      }
      for (auto &c : amogus) {
        t.erase(remove(t.begin(), t.end(), c), t.end());
      }
      if (s == t) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
}