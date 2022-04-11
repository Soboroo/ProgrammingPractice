#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, int> a;
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    a[x]++;
  }
  cin >> n;
  cout << a[n];
}