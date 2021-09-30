#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, r, t, x, y, z;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    s += "2";
    x = 0;
    y = 0;
    t = s[0];
    r = 0;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == '0')
        x = 1;
      if (s[j] == '1')
        y = 1;
      if (t == s[j])
        continue;
      else {
        r += !(t - 48);
        t = s[j];
      }
    }
    if (x && !y)
      z = 1;
    else if (!x && y)
      z = 0;
    else
      z = 2;
    cout << min(z, r) << endl;
  }
}