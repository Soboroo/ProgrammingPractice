#include "Exp.h"
#include <iostream>
using namespace std;

int main() {
  cout << "20201517 우영윤" << endl;
  Exp a(3, 2);
  Exp b(9);
  Exp c;

  cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
  cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

  if (a.equals(b))
    cout << "same" << endl;
  else
    cout << "not same" << endl;
}