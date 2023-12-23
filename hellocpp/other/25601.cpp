#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
using dict = map<string, vector<string>>;

bool find(dict &m, string &current, string &target) {
  if (current == target) {
    return true;
  } else if (m[current].size() == 0) {
    return false;
  } else {
    for (auto &s : m[current])
      if (find(m, s, target))
        return true;
    return false;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string a, b;
  cin >> n;
  dict m;
  n--;
  while (n--) {
    cin >> a >> b;
    m[b].push_back(a);
  }
  cin >> a >> b;
  cout << (find(m, a, b) || find(m, b, a) ? "1" : "0") << endl;
  return 0;
}