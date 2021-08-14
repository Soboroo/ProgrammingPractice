#define r t[a][b][c]
#define g(x, y, z) w(a x, b y, c z)
t[21][21][21];
w(a, b, c) {
  return a < 1 || b < 1 || c < 1 ? 1
         : a > 20 || b > 20 || c > 20
             ? w(20, 20, 20)
             : (r = r                ? r
                    : a < b && b < c ? g(, , -1) + g(, -1, -1) - g(, -1, )
                                     : g(-1, , ) + g(-1, -1, ) + g(-1, , -1) -
                                           g(-1, -1, -1));
}
main(a, b, c) {
  while (scanf("%d%d%d", &a, &b, &c)) {
    if (a == b && b == c && c == -1)
      break;
    printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
  }
}