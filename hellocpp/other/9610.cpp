#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> v(2, vector<int>(2));
  int n, a = 0;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (x > 0) {
      if (y > 0)
        v[0][0]++;
      else if (y < 0)
        v[1][1]++;
      else
        a++;
    } else if (x < 0) {
      if (y > 0)
        v[0][1]++;
      else if (y < 0)
        v[1][0]++;
      else
        a++;
    } else
      a++;
  }
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      cout << "Q" << i * 2 + (j + 1) << ": " << v[i][j] << "\n";
  cout << "AXIS: " << a << "\n";
}