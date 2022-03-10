#include <algorithm>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> v = {"063", "010", "093", "079", "106",
                      "103", "119", "011", "127", "107"};
  string s, t;
  while (1) {
    cin >> s;
    if (s == "BYE")
      break;
    s.pop_back();
    stringstream ss(s);
    int r = 0;
    while (getline(ss, t, '+')) {
      string x;
      for (int i = 0; i < t.size(); i += 3)
        x += to_string(find(v.begin(), v.end(), t.substr(i, 3)) - v.begin());
      r += stoi(x);
    }
    cout << s << '=';
    stack<string> st;
    while (r) {
      st.push(v[r % 10]);
      r /= 10;
    }
    while (!st.empty()) {
      cout << st.top();
      st.pop();
    }
    cout << endl;
  }
}