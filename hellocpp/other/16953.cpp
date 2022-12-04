#include <iostream>
using namespace std;
using ll = long long;

int solve(ll current, ll target, int step) {
  if (current == target)
    return step;
  if (current > target)
    return 0;
  int a = solve(current * 2, target, step + 1);
  int b = solve(current * 10 + 1, target, step + 1);
  if (!a && !b)
    return 0;
  if (!a)
    return b;
  if (!b)
    return a;
  return a < b ? a : b;
}

int main() {
  ll a, b;
  cin >> a >> b;
  int n = solve(a, b, 1);
  cout << (n ? n : -1) << endl;
}