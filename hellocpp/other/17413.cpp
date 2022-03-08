#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  stack<char> stk;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '<') {
      while (s[i] != '>')
        cout << s[i++];
      cout << s[i];
    } else {
      while (i < s.size() && s[i] != '<' && s[i] != ' ') {
        stk.push(s[i++]);
      }
      while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
      }
      if (s[i] == '<')
        i--;
      if (s[i] == ' ')
        cout << ' ';
    }
  }
}