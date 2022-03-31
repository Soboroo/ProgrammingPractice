#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> b(n, vector<int>(n));
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    for (int j = 0; j < n; j++) {
      b[j][j] = a[j];
    }

    for (int j = 0; j < n; j++) {
      for (int x = 0; x < n; x++) {
        cout << b[x][j] << " ";
      }
      cout << '\n';
    }
  }
}