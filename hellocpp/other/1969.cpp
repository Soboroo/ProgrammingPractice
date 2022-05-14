#include <climits>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<string> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  string r = *new string(m, '0');
  vector<char> c = {'A', 'C', 'G', 'T'};
  int res = 0;
  for (int i = 0; i < m; i++) {
    int s = INT_MAX, x = 0;
    for (int j = 0; j < 4; j++) {
      int t = 0;
      for (int k = 0; k < n; k++) {
        if (v[k][i] != c[j])
          t++;
      }
      if (t < s) {
        s = t;
        x = j;
      }
    }
    r[i] = c[x];
    res += s;
  }
  cout << r << '\n' << res << '\n';
}