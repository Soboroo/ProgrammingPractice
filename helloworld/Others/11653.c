main(n, i) {
  for (scanf("%d", &n), i = 2; n > 1; i++) {
    while (n % i == 0)
      printf("%d\n", i, n /= i);
  }
}