#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int chicken = 0, another = 0;
  for (auto &c : s) {
    if (c == 'C') {
      chicken++;
    } else {
      another++;
    }
  }
  cout << (another ? max(1, chicken / another) : n) << endl;
}