#include "Exp.h"
#include <iostream>
using namespace std;

int main() {
  cout << "20201517 �쿵��" << endl;
  Exp a(3, 2);
  Exp b(9);
  Exp c;

  cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
  cout << "a�� ���̽� " << a.getBase() << ',' << "���� " << a.getExp() << endl;

  if (a.equals(b))
    cout << "same" << endl;
  else
    cout << "not same" << endl;
}