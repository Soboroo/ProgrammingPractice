main(c) {
  double a = (scanf("%d", &c) + sqrt(5)) / 2;
  printf("%d", (int)(2 / sqrt(5) *
                     (pow(2 * a, c) - pow(a - 2, c) + pow(a, c - 1) -
                      pow(a - 2, c - 1))));
}