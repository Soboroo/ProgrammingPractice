long long r[1000001], i, j, d[1000001], m = 1, k;
main(a, b) {
  for (i = 1; i <= 1000000; i++) {
    for (j = 1; j <= 1000000 / i; j++) {
      r[i * j] += (i > sqrt(i * j) ? 0 : i == j ? i : i + j);
    }
  }
  d[1] = r[1];
  for (i = 0, scanf("%d", &a); i++ < a; printf("%lld\n", d[b])) {
    scanf("%d", &b);
    if (b > m) {
      for (k = d[m], j = m + 1; j <= b; j++) {
        k += r[j];
        d[j] = k;
      }
      m = b;
    }
  }
}