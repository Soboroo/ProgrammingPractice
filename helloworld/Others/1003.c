main(n, m, j, o, p) {
  scanf("%d", &n);
  for (int i = 0, a[2] = {1, 0}; i++ < n; a[0] = 1, a[1] = 0) {
    scanf("%d", &m);
    for (j = 0; ++j < m; a[o] += a[!(o = j % 2)])
      ;
    printf("%d %d\n", a[m % 2], a[!(m % 2)]);
  }
}