#include <iostream>
#include <map>
using namespace std;

int main() {
  string s;
  cin >> s;
  map<string, int> m;
  for (int i = 0; i < s.size(); i++)
    for (int j = i; j < s.size(); j++)
      m[s.substr(i, j - i + 1)]++;
  cout << m.size();
}