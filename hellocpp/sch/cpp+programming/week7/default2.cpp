#include <iostream>
using namespace std;

void f(char a = ' ', int b = 1) {
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < 10; j++)
      cout << a;
    cout << endl;
  }
}

int main() {
  f();
  f('%');
  f('@', 5);
}