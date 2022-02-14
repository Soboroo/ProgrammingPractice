#include <iostream>
#include <string>
using namespace std;

int main() {
  string n, m;
  long long s = 0;
  cin >> n >> m;
  int t = 0;
  for (char c : n)
    t += c - 48;
  for (char c : m)
    s += (c - 48) * t;
  cout << s << '\n';
}