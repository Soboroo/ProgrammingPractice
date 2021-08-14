f(a) {
  if (a)
    f(a / 2);
  else
    return;
  printf("%d", a % 2);
}
main(a) { f(a, scanf("%d", &a)); }