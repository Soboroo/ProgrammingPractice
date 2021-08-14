a[6] = {1, 1, 2, 2, 2, 8};
main(t, i, o) {
  for (i = 0, o = 1; i++ < 6;)
    printf("%d ", a[i - 1] - t, scanf("%d", &t));
}