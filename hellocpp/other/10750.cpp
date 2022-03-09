#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, x, z;
  cin >> s >> x;
  for (auto &c : s) {
    z.push_back(c);
    while (z.size() >= x.size() && z.substr(z.size() - x.size()) == x)
      z.erase(z.size() - x.size());
  }
  cout << z;
}