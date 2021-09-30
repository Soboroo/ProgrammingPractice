#include <iostream>
#include <string>
using namespace std;

class Integer {
  int value;

public:
  Integer(int n) : value(n) {}
  Integer(const char *n) : Integer(stoi(n)) {}
  int get() { return value; }
  void set(int n) { value = n; }
  int isEven() { return !(value % 2); }
};

int main() {
  cout << "20201517 우영윤" << endl;
  Integer n(30);
  cout << n.get() << ' ';
  n.set(50);
  cout << n.get() << ' ';

  Integer m("300");
  cout << m.get() << ' ';
  cout << m.isEven();
}