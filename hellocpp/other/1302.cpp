#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
using pa = pair<string, int>;

int main() {
  int n;
  cin >> n;
  map<string, int> m;
  int r = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    ++m[s];
  }
  vector<pa> v;
  for (auto &p : m) {
    v.push_back(p);
  }
  sort(v.begin(), v.end(), [](pa &p1, pa &p2) {});
}