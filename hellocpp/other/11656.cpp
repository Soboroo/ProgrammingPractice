#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t;
  vector<string> v;
  for (auto i = s.rbegin(); i != s.rend(); ++i) {
    t = *i + t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  for (auto &i : v)
    cout << i << "\n";
}