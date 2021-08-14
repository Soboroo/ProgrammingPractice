i, t, s;
main() {
  for (; i++ < 4;) {
    scanf("%d", &t);
    s += t;
  }
  printf("%d\n%d", s / 60, s % 60);
}