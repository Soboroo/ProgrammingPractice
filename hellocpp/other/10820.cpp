#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  while (true) {
    string s;
    getline(cin, s);
    if (s == "")
      break;
    vector<int> v = {0, 0, 0, 0};
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        v[0]++;
      } else if (s[i] >= 'A' && s[i] <= 'Z') {
        v[1]++;
      } else if (s[i] >= '0' && s[i] <= '9') {
        v[2]++;
      } else if (s[i] == ' ') {
        v[3]++;
      } else if (s[i] == EOF) {
        for (int i = 0; i < 4; i++) {
          cout << v[i] << " ";
        }
        return 0;
      }
    }
    for (int i = 0; i < 4; i++) {
      cout << v[i] << " ";
    }
    cout << '\n';
  }
}