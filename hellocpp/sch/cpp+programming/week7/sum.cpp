#include <iostream>
using namespace std;

int sum(int a, int b) { return (abs(b - a) + 1) * (a + b) / 2; }

int sum(int a) { return a * (a + 1) / 2; }

int main() {
  cout << sum(3, 5) << endl;
  cout << sum(3) << endl;
  cout << sum(100) << endl;
}