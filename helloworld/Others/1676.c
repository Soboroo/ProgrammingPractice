a, n, m, i = 5;
main() {
  for (scanf("%d", &a); a > i; n += a / i, i *= 5)
    ;
  for (i = 2; a > i; m += a / i, i *= 2)
    ;
  printf("%d", n > m ? m : n);
}