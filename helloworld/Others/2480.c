f(a, b, c, m) {
  m = a;
  if (m < b)
    m = b;
  if (m < c)
    m = c;
  return m * 100;
}
main(a, b, c) {
  printf("%d",
         a == b && b == c ? 10000 + a * 1000
         : a == b || b == c || a == c
             ? a == b || b == c ? 1000 + b * 100 : 1000 + a * 100
             : f(a, b, c),
         scanf("%d%d%d", &a, &b, &c));
}