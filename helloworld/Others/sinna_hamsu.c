t[21][21][21];
w(a, b, c) {
  return a < 1 || b < 1 || c < 1 ? 1
         : a > 20 || b > 20 || c > 20
             ? w(20, 20, 20)
             : (t[a][b][c] =
                    t[a][b][c] ? t[a][b][c]
                    : a < b && b < c
                        ? w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c)
                        : w(a - 1, b, c) + w(a - 1, b - 1, c) +
                              w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1));
}
main(a, b, c) {
  while (scanf("%d%d%d", &a, &b, &c)) {
    if (a == b && b == c && c == -1)
      break;
    printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
  }
}