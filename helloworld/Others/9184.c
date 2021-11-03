t[21][21][21], r;
w(a, b, c) {
  if (a <= 0 || b <= 0 || c <= 0)
    return 1;
  if (a > 20 || b > 20 || c > 20)
    a = b = c = 20;
  if (t[a][b][c])
    return t[a][b][c];
  if (a < b && b < c)
    r = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
  else
    r = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) -
        w(a - 1, b - 1, c - 1);
  return t[a][b][c] = r;
}
main(a, b, c) {
  while (1) {
    scanf("%d%d%d", &a, &b, &c);
    if (a == -1 && b == -1 && c == -1)
      exit(0);
    printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
  }
}