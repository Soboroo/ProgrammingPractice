i, j, s, t;
main(n) {
  scanf("%d", &n);
  int *c = (int *)malloc(++n * 4);
  for (; i++ < n - 1; scanf("%d", &c[i - 1]))
    ;
  for (i = 1; i <= n + 1; i++) {
    s = 0;
    for (j = 1; j <= n - 1; j++) {
      if (c[j] > c[j + 1]) {
        s = 1;
        t = c[j];
        c[j] = c[j + 1];
        c[j + 1] = t;
      }
    }
    if (!s) {
      printf("%d", i);
      break;
    }
  }
}