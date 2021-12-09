#include <iostream>
#include <string>
using namespace std;

int main() {
  string target, key;
  getline(cin, target);
  getline(cin, key);
  int result = 0;
  if (target.size() < key.size()) {
    cout << 0;
    return 0;
  }
  for (int i = 0; i <= target.size() - key.size(); i++) {
    bool flag = true;
    for (int j = 0, k = i; j < key.size(); j++, k++) {
      if (target[k] != key[j])
        flag = false;
    }
    if (flag) {
      i += key.size() - 1;
      result++;
    }
  }
  cout << result;
}