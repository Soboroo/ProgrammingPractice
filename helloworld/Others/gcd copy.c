main(n, a, b, c, t, i) {
  for (scanf("%d", &n), i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    c = a * b;
    while (t = a % b) {
      a = b;
      b = t;
    }
    printf("%d\n", c / b);
  }
}