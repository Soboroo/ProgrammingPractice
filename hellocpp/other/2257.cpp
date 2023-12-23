#include <iostream>
#include <stack>
#include <string>
using namespace std;

int ctoi(char c) { return c - '0'; }
bool isnum(char c) { return c >= '0' && c <= '9'; }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  stack<char> st, tmp;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ')') {
      int times = 1;
      if (i < s.length() - 1 && isnum(s[i + 1]))
        times = ctoi(s[++i]);
      while (st.top() != '(') {
        for (int j = 0; j < times; j++)
          tmp.push(st.top());
        st.pop();
      }
      st.pop();
      while (!tmp.empty()) {
        st.push(tmp.top());
        tmp.pop();
      }
    } else if (isnum(s[i])) {
      int times = ctoi(s[i]);
      for (int j = 0; j < times - 1; j++)
        st.push(st.top());
    } else
      st.push(s[i]);
  }
  int ans = 0;
  while (!st.empty()) {
    if (st.top() == 'H')
      ans++;
    else if (st.top() == 'C')
      ans += 12;
    else if (st.top() == 'O')
      ans += 16;
    st.pop();
  }
  cout << ans;
}