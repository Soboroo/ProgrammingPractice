#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, r;
  while (1) {
    getline(cin, s);
    if (cin.eof())
      break;
    r += s;
  }
  while (r.find("<br>") != string::npos)
    r.replace(r.find("<br>"), 4, "\n");
  int i = 0;
}