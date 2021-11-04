#include <iostream>
#include <set>
using namespace std;

int main() {
  int n, m, b;
  char a;
  cin >> n;

  for (int i = 0; i < n; i++) {
    multiset<int> s;
    cin >> m;
    for (int j = 0; j < m; j++) {
      cin >> a >> b;
      if (a == 'I')
        s.insert(b);
      else if (a == 'D') {
        if (b == 1) {
          s.erase(s.find(*(s.begin())));
        } else {
          s.erase(s.find(*(s.end())));
        }
      }
    }
    if (s.size() == 0)
      cout << "EMPTY";
    else
      cout << *s.begin() << " " << *s.end() << endl;
  }
}