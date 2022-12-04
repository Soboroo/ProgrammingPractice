#include <iostream>
#include <vector>
using namespace std;
vector<int> date = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isVaildDate(int y, int m, int d) {
  if (m < 1 || m > 12)
    return false;
  if ((d < 1 || d > date[m - 1] + (m == 2 && y % 4 == 0 && y % 100 != 0)) ||
      (d == 29 && m == 2 && y % 400 != 0))
    return false;
  return true;
}

int main() {
  int y, m, d;
  cin >> y >> m >> d;
  bool flag = true;
  if (isVaildDate(y, m, d)) {
  }