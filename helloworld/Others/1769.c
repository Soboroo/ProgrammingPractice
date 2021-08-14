i, c[2];
f(n) { return n ? n % 10 + f(n / 10) : n; }
main() {
  scanf("%d", c);
  while (c[i % 2] / 10) {
    int t = f(c[i % 2]);
    c[(i - 1) % 2] = t;
    printf("%d\n", c[i % 2]);
    i++;
  }

  printf("%d", c[i % 2]);
}