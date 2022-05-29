#include <iostream>
#include <map>
using namespace std;
using ll = long long;
ll p, q;

ll solve(map<ll, ll> &a, ll n) {
  return a[n] = a[n] ? a[n] : solve(a, (double)n / p) + solve(a, (double)n / q);
}

int main() {
  ll n;
  cin >> n >> p >> q;
  map<ll, ll> a;
  a[0] = 1;
  cout << solve(a, n);
}