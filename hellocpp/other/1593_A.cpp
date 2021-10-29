#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int c[3];
    int only = 0;
    for (int j = 0; j < 3; j++)
      cin >> c[j];
    int max = c[0];
    for (int j = 1; j < 3; j++) {
      if (max < c[j])
        max = c[j];
    }
    for (int j = 0; j < 3; j++) {
      if (max == c[j])
        only++;
    }
    for (int j = 0; j < 3; j++) {
      if (max == c[j])
        cout << !(only == 1) << " ";
      else
        cout << max - c[j] + 1 << " ";
    }
    cout << endl;
  }
}