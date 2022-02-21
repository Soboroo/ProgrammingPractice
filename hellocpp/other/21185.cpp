#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n % 2)
    cout << "Either";
  else if (!(n % 4))
    cout << "Even";
  else
    cout << "Odd";
}