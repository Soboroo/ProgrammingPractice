#include <iostream>
#include <string>
using namespace std;

int main() {
  char x[] = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
  while (true) {
    int r = 0;
    string s;
    getline(cin, s);
    if (s == "#")
      break;
    for (auto c : s)
      for (auto d : x)
        if (c == d)
          r++;
    cout << r << '\n';
  }
}