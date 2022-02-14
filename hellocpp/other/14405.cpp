#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  deque<char> dq;
  for (char c : s)
    dq.push_back(c);
  int i = 0;
  while (!dq.empty()) {
    if ((dq[0] == 'p' && dq[1] == 'i') || (dq[0] == 'k' && dq[1] == 'a'))
      for (i = 0; i++ < 2;)
        dq.pop_front();
    else if (dq[0] == 'c' && dq[1] == 'h' && dq[2] == 'u')
      for (i = 0; i++ < 3;)
        dq.pop_front();
    else {
      cout << "NO";
      exit(0);
    }
  }
  cout << "YES";
}