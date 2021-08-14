i;
main(n) {
  long long f[95] = {
      0,
      1,
  };
  scanf("%d", &n);
  if (n < 2)
    printf("%d", n);
  else {
    for (i = 1; i++ < n;) {
      f[i] = f[i - 1] + f[i - 2];
    }
    printf("%lld", f[i - 1]);
  }
}