main(a, b, c) {
  printf("%s",
         a + b + c == 180 ? a == b && b == c             ? "Equilateral"
                            : a == b || b == c || a == c ? "Isosceles"
                                                         : "Scalene"
                          : "Error",
         scanf("%d%d%d", &a, &b, &c));
}