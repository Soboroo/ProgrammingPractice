#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int n, r = 0;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    stack<char> st;
    for (auto c : s)
      if (!st.empty() && st.top() == c)
        st.pop();
      else
        st.push(c);
    r += st.empty() ? 1 : 0;
  }
  cout << r << endl;
}