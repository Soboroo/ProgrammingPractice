#define r t[a][b][c]
#define p a, b, c
t[21][21][21];
w(p) {
  int x = a - 1, y = b - 1, z = c - 1;
  return a < 1 || b < 1 || c < 1 ? 1
         : a > 20 || b > 20 || c > 20
             ? w(20, 20, 20)
             : (r = r ? r
                    : a < b && b < c
                        ? w(p - 1) + w(a, y, z) - w(a, y, c)
                        : w(x, b, c) + w(x, y, c) + w(x, b, y) - w(x, y, z));
}
main(p) {
  while (scanf("%d%d%d", &a, &b, &c)) {
    if (a == b && b == c && c == -1)
      break;
    printf("w(%d, %d, %d) = %d\n", p, w(p));
  }
}