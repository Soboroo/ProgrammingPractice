#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> t = {1, 1};
  for (int i = 2; i <= n; i++) {
    int s = t[1];
    t[1] = (t[0] + t[1]) % 10;
    t[0] = s;
  }
  for (int i = n; i <= m; i++) {
    cout << t[0];
    int s = t[1];
    t[1] = (t[0] + t[1]) % 10;
    t[0] = s;
  }
}