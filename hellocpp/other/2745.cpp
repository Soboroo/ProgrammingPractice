#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int n, r = 0;
  cin >> s >> n;
  reverse(s.begin(), s.end());
  for (int i = 0, x = 1; i < s.size(); i++, x *= n)
    if (s[i] > 47 && s[i] < 58)
      r += (s[i] - 48) * x;
    else
      r += (s[i] - 55) * x;
  cout << r;
}