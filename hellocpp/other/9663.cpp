#include <iostream>
#include <vector>
using namespace std;

bool checkVaild(vector<int> &v, int n, int x, int y) {
  for (int i = 0; i < x; i++) {
    if (v[i] == y)
      return false;
    if (abs(v[i] - y) == abs(i - x))
      return false;
  }
  return true;
}

int backtrace(int n, int column, vector<int> &v) {
  if (column == n) {
    return 1;
  } else {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (checkVaild(v, n, column, i)) {
        v[column] = i;
        sum += backtrace(n, column + 1, v);
      }
    }
    return sum;
  }
}
int main() {
  int n;
  cin >> n;
  vector<int> v(n, 0);
  cout << backtrace(n, 0, v) << endl;
  return 0;
}