#include <iostream>
#include <vector>
using namespace std;

int main() {
  int ans = 0;
  vector<int> v1(3), v2(3);
  for (int i = 0; i < 3; i++)
    cin >> v1[i];
  for (int i = 0; i < 3; i++)
    cin >> v2[i];
  for (int i = 0; i < 3; i++) {
    ans += min(v1[i], v2[i]);
    if (v1[i] > v2[i]) {
      v1[i] -= v2[i];
      v2[i] = 0;
    } else {
      v2[i] -= v1[i];
      v1[i] = 0;
    }
  }
  while ((v2[0] > 0 || v2[1] > 0 || v2[2] > 0) &&
         (v1[0] > 0 || v1[1] > 0 || v1[2] > 0)) {
    int a = v2[0], b = v2[1], c = v2[2];
    v2[0] += c / 3;
    v2[2] -= c / 3 * 3;
    v2[1] += a / 3;
    v2[0] -= a / 3 * 3;
    v2[2] += b / 3;
    v2[1] -= b / 3 * 3;
    for (int i = 0; i < 3; i++) {
      ans += min(v1[i], v2[i]);
      if (v1[i] > v2[i]) {
        v1[i] -= v2[i];
        v2[i] = 0;
      } else {
        v2[i] -= v1[i];
        v1[i] = 0;
      }
    }
  }
  cout << ans;
}