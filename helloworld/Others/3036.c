i;
f(a, b) { return b ? f(b, a % b) : a; }
main(a, b, n, d) {
  for (scanf("%d%d", &n, &a); i++ < n - 1;)
    printf("%d/%d\n", a / d, b / d, d = f(a, b), scanf("%d", &b));
}