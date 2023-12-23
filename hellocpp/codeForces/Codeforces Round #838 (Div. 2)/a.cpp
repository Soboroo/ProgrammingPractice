#include <iostream>
#include <vector>
using namespace std;

bool isEven(vector<int> &v) {
  int sum = 0;
  for (auto i : v) {
    sum += i;
  }
  return sum % 2 == 0;
}

int main() {
  int n, m;
  cin >> n;
  while (n--) {
    int sum = 0;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
      cin >> a[i];
      sum += a[i];
    }
  }
}