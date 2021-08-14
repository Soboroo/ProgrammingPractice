a, b, l[3];
int f(void *f, void *s) {
  a = *((int *)f);
  b = *((int *)s);
  return a > b ? 1 : a < b ? -1 : 0;
}

main(i) {
  scanf("%d%d%d", l, l + 1, l + 2);
  for (qsort(l, 3, 4, f); i++ < 4; printf("%d ", l[i - 2]))
    ;
}