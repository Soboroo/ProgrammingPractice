#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int i = 0, j = s.size() - 1;
  while (i < j) {
    if (s[i++] != s[j--]) {
      cout << 0;
      return 0;
    }
  }
  cout << 1;
}