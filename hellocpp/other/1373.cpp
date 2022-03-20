#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s == "0") {
    cout << "0";
    return 0;
  }
  int sum = 0;
  for (int i = 0; i < s.size() % 3; i++) {
    int t = s[i] - '0';
    for (int j = 0; j < s.size() % 3 - i - 1; j++) {
      t *= 2;
    }
    sum += t;
  }
  if (sum)
    cout << sum;
  for (int i = s.size() % 3; i < s.size(); i += 3) {
    int t = (s[i] - '0') * 4;
    t += (s[i + 1] - '0') * 2;
    t += s[i + 2] - '0';
    cout << t;
  }
}