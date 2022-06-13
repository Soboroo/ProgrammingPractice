#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = 0;
  for (auto c : s) {
    int t = c - '0';
    n += t * t * t * t * t;
  }
  cout << n << endl;
}