#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram() {
  fill(mem, mem + 1 + 100 * 1024, 0);
  size = 100 * 1024;
}
Ram::~Ram() { cout << "�޸� ���ŵ�" << endl; }
char Ram::read(int address) { return mem[address]; }
void Ram::write(int address, char value) { mem[address] = value; }