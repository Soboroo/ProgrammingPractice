#define q double
v(a, b) { return b ? v(b, a % b) : a; }

q g(q a, q b, q c, q d) { return sqrt(pow(a - c, 2) + pow(b - d, 2)); }

main(a, b, c, d, e, f, t) {
  scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
  t = v(abs(e), abs(f));
  e /= t;
  f /= t;
  while (g(a, b, c, d) > g(a, b, c + e, d + f)) {
    c += e;
    d += f;
  }
  printf("%d %d", c, d);
}
