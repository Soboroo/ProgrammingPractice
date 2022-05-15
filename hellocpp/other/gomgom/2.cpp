#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int n, r = 0;
  cin >> n;
  map<string, bool> v;
  while (n--) {
    string s;
    cin >> s;
    if (s == "ENTER") {
      v.clear();
    } else {
      if (!v[s]) {
        r++;
        v[s] = true;
      }
    }
  }
  cout << r << endl;
}