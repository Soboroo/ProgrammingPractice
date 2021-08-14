a, s, i = 5;
main() {
  for (scanf("%d", &a); a > i; s += a / i, i *= 5)
    ;
  printf("%d", s);
}