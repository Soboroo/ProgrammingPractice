#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> v(26);
  for (auto &c : s)
    v[c - 'a']++;
  for (auto &i : v)
    cout << i << " ";
}