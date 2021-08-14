a[3], i, m, t;
main() {
  for (; i++ < 3; m = m < t ? t : m, a[i - 1] = t)
    scanf("%d", &t);
  for (t = 0; i--; t += m - a[i])
    ;
  printf("%d", t);
}