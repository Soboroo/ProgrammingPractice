#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int n, m, r = 0;
  string s;
  cin >> n >> m;
  map<string, int> x;
  while (n--) {
    cin >> s;
    x[s] = 1;
  }
  while (m--) {
    cin >> s;
    r += x[s];
  }
  cout << r;
}