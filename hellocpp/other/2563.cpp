#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, a, b, s = 0;
  vector<vector<bool>> v(100, vector<bool>(100, false));
  cin >> n;
  while (n--) {
    cin >> a >> b;
    for (int i = a; i < a + 10; i++)
      for (int j = b; j < b + 10; j++)
        v[i][j] = true;
  }
  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 100; j++)
      s += v[i][j];

  cout << s;
}