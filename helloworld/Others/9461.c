#define l long
l l f[101], i;
l l p(n) { return n < 3 ? 1 : f[n] ? f[n] : (f[n] = p(n - 2) + p(n - 3)); }
main(a, b) {
  for (scanf("%d", &a); i++ < a; printf("%lld\n", p(b - 1), scanf("%d", &b)))
    ;
}