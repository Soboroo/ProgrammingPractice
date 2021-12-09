#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> num;

int prec(char i) {
  if (i == '(' || i == ')')
    return 0;
  else if (i == '+' || i == '-')
    return 1;
  else if (i == '*' || i == '/')
    return 2;
}

int main() {
  string input;
  cin >> input;
  for (auto i = input.begin(); i < input.end(); i++) {
    if (*i == '+' || *i == '-' || *i == '*' || *i == '/') {
      while (num.size() && (prec(*i) <= prec(num.top()))) {
        cout << num.top();
        num.pop();
      }
      num.push(*i);
    } else if (*i == '(')
      num.push(*i);
    else if (*i == ')') {
      while (num.top() != '(') {
        cout << num.top();
        num.pop();
      }
      num.pop();
    } else
      cout << *i;
  }
  while (num.size()) {
    cout << num.top();
    num.pop();
  }
}