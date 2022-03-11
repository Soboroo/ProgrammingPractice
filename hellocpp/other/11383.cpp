#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> v(n);
  string t;
  for (int i = 0; i < n; i++) {
    cin >> t;
    for (auto &c : t) {
      v[i].push_back(c);
      v[i].push_back(c);
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t != v[i]) {
      cout << "Not Eyfa" << endl;
      return 0;
    }
  }
  cout << "Eyfa" << endl;
}