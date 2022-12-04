#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, ans = 0;
  string x, y;
  map<string, bool> v;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    if (x == "ChongChong" || y == "ChongChong" || v[x] || v[y])
      v[x] = v[y] = true;
  }
  for (auto i : v)
    ans += i.second;
  cout << ans;
}