#include <iostream>
#include <string>
using namespace std;

int main() {
  string n, m, k;
  cin >> n >> m >> k;
  if (n.size() < k.size())
    swap(n, k);
  if (m == "+") {
    n[n.size() - k.size()] = n.size() == k.size() ? '2' : '1';
    cout << n;
  } else {
    cout << '1';
    for (int i = 2; i < n.size() + k.size(); i++)
      cout << '0';
  }
}