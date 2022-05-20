f(n) { return n ? n % 10 + f(n / 10) : 0; }
n, s, i;
main() {
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    s += !(i % f(i));
  printf("%d", s);
}