#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    cout << (t <= sqrt(w * w + h * h) ? "DA" : "NE") << endl;
  }
}