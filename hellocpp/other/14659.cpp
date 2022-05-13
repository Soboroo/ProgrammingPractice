#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  for (int i = 0; i < n - 1; i++) {
    int s = 0;
    for (int j = i + 1; j < n; j++)
      if (v[i] > v[j])
        s++;
      else
        break;
    if (s > m)
      m = s;
  }
  cout << m << '\n';
}