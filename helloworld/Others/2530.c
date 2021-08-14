main(a, b, c, d) {
  printf("%d %d %d", a / 3600, a % 3600 / 60, a % 60,
         a = (a * 3600 + b * 60 + c + d) % 86400,
         scanf("%d%d%d%d", &a, &b, &c, &d));
}