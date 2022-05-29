#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s1, s2;
  cin >> s1 >> s2;
  int ans = 0;
  for (int a = 0; a < s1.size(); a++)
    for (int b = a; b < s1.size(); b++)
      for (int c = 0; c < s2.size(); c++)
        for (int d = c; d < s2.size(); d++) {
          map<char, int> m1;
          for (int i = a; i <= b; i++)
            m1[s1[i]]++;
          for (int i = c; i <= d; i++) {
            m1[s2[i]]--;
            if (m1[s2[i]] < 0)
              break;
          }
          if (m1.empty())
            ans = max(ans, b - a + 1);
        }
  cout << ans;
}