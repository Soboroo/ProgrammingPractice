#include <stdio.h>
#define MOD 10007

long long fact(int x) { return x ? x * fact(x - 1) % MOD : 1; }
int p(int x, int n) { return x && n ? x * p(x - 1, n - 1) % MOD : 1; };
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d", p(k, k));
  // printf("%d", fact(n) / fact(k) / fact(n - k));
}