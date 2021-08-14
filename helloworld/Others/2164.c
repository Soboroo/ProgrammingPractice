main(n, t) {
  printf("%d",
         (t = (int)(2 * (n - pow(2, floor(log(n) / log(2))))) % n) ? t : n,
         scanf("%d", &n));
}