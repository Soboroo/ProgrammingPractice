#include <iostream>
#include <map>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m;
  map<int, int> mp;
  while (n--) {
    cin >> x;
    mp[x]++;
  }
  while (m--) {
    cin >> x;
    if (mp[x])
      mp.erase(x);
    else
      mp[x]++;
  }
  cout << mp.size();
}