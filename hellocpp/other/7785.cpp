#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  map<string, int, greater<string>> x;
  string s, t;
  while (n--) {
    cin >> s >> t;
    if (t == "enter") {
      x[s] = 1;
    } else {
      x[s] = 0;
    }
  }
  for (auto i : x) {
    if (i.second)
      cout << i.first << '\n';
  }
}