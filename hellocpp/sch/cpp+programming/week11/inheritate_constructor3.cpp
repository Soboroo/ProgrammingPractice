#include <iostream>
using namespace std;

class A {
public:
  A() { cout << "생성자 A" << endl; }
  A(int x) { cout << "매개변수생성자 A" << x << endl; }
  void showme() { cout << "뷁" << endl; }
};

class B : public A {
public:
  B() { cout << "생성자 A" << endl; }
  B(int x) : A(x + 3) { cout << "매개변수생성자 B" << x << endl; }
  void showme() { cout << "음머ㅓㅓㅓㅓㅓ" << endl; }
};

int main() {
  B b(5);
  b.showme();
}

int main() {
  B b(5);
  return 0;
}
