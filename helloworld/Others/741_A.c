i, j;
r = -1;
main(a, x, y, t) {
  for (scanf("%d", &a); i++ < a;) {
    r = -1;
    scanf("%d%d", &x, &y);
    if (x > y) {
      t = x;
      x = y;
      y = t;
    }
    if (x > (double)y / 2)
      printf("%d\n", y - x);
    else
      printf("%d\n", y / 2 - !(y % 2));
  }
}