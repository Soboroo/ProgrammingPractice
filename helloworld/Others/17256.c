main(i, t) {
  int a[3];
  scanf("%d%d%d", a, a + 1, a + 2);
  for (i = 0; i++ < 3;)
    printf("%d ", i % 2 ? t - a[3 - i] : t / a[3 - i], scanf("%d", &t));
}