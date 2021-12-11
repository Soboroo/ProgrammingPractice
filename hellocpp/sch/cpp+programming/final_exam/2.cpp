#include <iostream>
using namespace std;

class B {
public:
  B() { cout << "생성자 B\n"; }
  ~B() { cout << "소멸자 B\n"; }
};
class A : public B {
public:
  A() { cout << "생성자 A\n"; }
  ~A() { cout << "소멸자 A\n"; }
};
class C : public A {
public:
  C() { cout << "생성자 C\n"; }
  ~C() { cout << "소멸자 C\n"; }
};

int main() {
  cout << "20201517 우영윤\n";
  C c;
  return 0;
}