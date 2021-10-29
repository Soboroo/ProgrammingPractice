#include <iostream>
using namespace std;

void printCharsReverse(const char *str) {
  if (*str == NULL)
    return;
  else {
    printCharsReverse(str + 1); // No str++ !!!!!!!!!!!!!!!!
    printf("%c", *str);
  }
}

int main() {
  const char *target = "Hello, World!";
  printCharsReverse(target);
}