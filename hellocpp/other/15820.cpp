#include <iostream>
#include <string>
using namespace std;

void input(string s) {
  int n, k;
  cin >> n >> k;
  if (n != k) {
    cout << s;
    exit(0);
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  while (n--)
    input("Wrong Answer");
  while (k--)
    input("Why Wrong!!!");
  cout << "Accepted";
}