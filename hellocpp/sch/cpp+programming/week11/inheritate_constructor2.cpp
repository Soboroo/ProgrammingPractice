#include <iostream>
using namespace std;

class A {
public:
  A() { cout << "생성자 A" << endl; }
  A(int x) { cout << "매개변수생성자 A" << endl; }
  ~A() { cout << "소멸자 A" << endl; }
}

class B : public A {
public:
  B() { cout << "생성자 B" << endl; }
}