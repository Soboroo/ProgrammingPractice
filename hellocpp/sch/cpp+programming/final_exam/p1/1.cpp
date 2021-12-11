#include <iostream>
using namespace std;

class FakeAdder {
  int num;

public:
  FakeAdder(int num) { this->num = num; }
  int getNum() { return num; }
  int operator+(FakeAdder &op) { return this->num - op.getNum(); }
  int operator-(FakeAdder &op) { return this->num + op.getNum(); }
};

int main() {
  cout << "20201517 우영윤\n";
  FakeAdder a(3);
  FakeAdder b(2);
  cout << "a + b = " << a + b << endl;

  FakeAdder c(3);
  FakeAdder d(2);
  cout << "c + d = " << c - d << endl;
}