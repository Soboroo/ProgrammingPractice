main(a, b, n, m, x, y, f) {
  scanf("%d%d%d%d%d%d", &a, &b, &n, &m, &x, &y);
  f = a * m + n * y + x * b - b * n - m * x - y * a;
  puts(f > 0 ? "1" : f < 0 ? "-1" : "0");
}