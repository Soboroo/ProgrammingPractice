i, j, k, m[5];
main(a, b) {
  for (scanf("%d%d", &a, &b); i++ < a;) {
    char s[5 * b + 3];
    int *n = (int *)calloc(b, 4);
    for (j = 0; j++ < 5;) {
      scanf("%s", s);
      if (s[1] == '#')
        continue;
      for (k = 0; k < b; k++) {
        if (s[1 + 5 * k] == '*' && n[k] != -1)
          n[k]++;
        if (n[k] == 4)
          m[4]++;
        if (s[1 + 5 * k] == '.') {
          m[n[k]]++;
          n[k] = -1;
        }
      }
    }
  }
  for (i = 0; i++ < 5;)
    printf("%d ", m[i - 1]);
}