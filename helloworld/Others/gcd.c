main(a, b, c, t) {
  scanf("%d %d", &a, &b);
  c = a * b;
  while (t = a % b) {
    a = b;
    b = t;
  }
  printf("%d\n%d", b, c / b);
}