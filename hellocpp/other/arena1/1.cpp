#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> m;
  int x;
  for (int i = 0; i < 5; i++) {
    cin >> x;
    m[x]++;
  }
  for (auto &i : m) {
    if (i.second % 2)
      cout << i.first;
  }
}