#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  stack<double> st;
  vector<double> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  for (auto c : s) {
    if (c >= 'A' && c <= 'Z')
      st.push(v[c - 'A']);
    else {
      double a = st.top();
      st.pop();
      double b = st.top();
      st.pop();
      if (c == '+')
        st.push(a + b);
      else if (c == '-')
        st.push(b - a);
      else if (c == '*')
        st.push(a * b);
      else if (c == '/')
        st.push(b / a);
    }
  }
  cout.precision(2);
  cout << fixed << st.top() << '\n';
}