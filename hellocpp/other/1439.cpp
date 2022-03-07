#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  regex a("0+"), b("1+");
  regex_iterator<string::iterator> i(s.begin(), s.end(), a),
      j(s.begin(), s.end(), b), e;
  int x = 0, y = 0;
  if (i != e && j != e) {
    while (i++ != e)
      x++;
    while (j++ != e)
      y++;
    cout << min(x, y);
  } else
    cout << "0";
}