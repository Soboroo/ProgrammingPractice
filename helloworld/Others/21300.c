main(i, s, n) {
  for (i = s = 0; i++ < 6;) {
    scanf("%d", &n);
    s += n;
  }
  printf("%d", s * 5);
}