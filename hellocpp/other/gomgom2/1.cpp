#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, a = 0;
  string s;
  cin >> n;
  while (n--) {
    cin >> s;
    a += stoi(s.substr(2, s.size())) <= 90;
  }
  cout << a;
}