#include "Ram.h"
#include <iostream>
using namespace std;

int main() {
  cout << "20201517 �쿵��" << endl;
  Ram ram;
  ram.write(100, 20);
  ram.write(101, 30);
  char res = ram.read(100) + ram.read(101);
  ram.write(102, res);
  cout << "102 ������ �� = " << (int)ram.read(102) << endl;
}