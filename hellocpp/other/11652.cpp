#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
using SI = pair<string, int>;

class BigInt {
private:
  vector<int> v;
  bool sign;
  void trim() {
    while (!v.empty() && v.back() == 0)
      v.pop_back();
    if (v.empty())
      sign = false;
  }

public:
  BigInt(const string &s) : sign(s[0] == '-') {
    for (int i = (sign ? 1 : 0); i < s.size(); i++)
      v.push_back(s[i] - '0');
    trim();
  }
  BigInt(const BigInt &x) : sign(x.sign), v(x.v) {}
  bool operator<(const BigInt &x) const {
    if (sign != x.sign)
      return sign;
    if (v.size() != x.v.size())
      return sign ? v.size() < x.v.size() : v.size() > x.v.size();
    for (int i = 0; i < v.size(); i++) {
      if (v[i] != x.v[i])
        return sign ? v[i] < x.v[i] : v[i] > x.v[i];
    }
    return false;
  }
  bool operator>(const BigInt &x) const { return x < *this; }
};

bool sort_by_count(const SI &a, const SI &b) {
  return a.second == b.second ? BigInt(a.first) < BigInt(b.first)
                              : a.second > b.second;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string s;
  cin >> n;
  map<string, int> m;
  while (n--) {
    cin >> s;
    m[s]++;
  }
  vector<SI> v;
  for (auto i : m) {
    v.push_back(i);
  }
  sort(v.begin(), v.end(), sort_by_count);
  cout << v[0].first << '\n';
}