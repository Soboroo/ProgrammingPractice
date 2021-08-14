i;
double f(int n, int k) { return k == 1 ? n : (double)n / k * f(n - 1, k - 1); }
main(n, a, b) {
  for (scanf("%d", &n); i++ < n;)
    printf("%d\n", (int)f(b, a), scanf("%d%d", &a, &b));
}