main(i, s, n, p) {
  for (i = s = 0, p = 8; i++ < 4; p /= 2) {
    scanf("%d", &n);
    s += n * ((6 + (i % 2)) * p);
  }
  printf("%d", s);
}