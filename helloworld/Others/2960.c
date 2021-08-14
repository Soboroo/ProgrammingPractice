r, k = 1;
main(a, b, i, j) {
  i = scanf("%d%d", &a, &b);
  int *s = calloc(a + 1, 4);
  for (; i <= a; i++) {
    if (!s[i])
      for (j = 1; i * j <= a; s[i * j++] = 1) {
        if (s[i * j])
          continue;
        if (k == b) {
          printf("%d", i * j);
          return 0;
        }
        k++;
      }
  }
}