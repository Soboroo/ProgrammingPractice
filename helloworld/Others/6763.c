main(a, b, c) {
  printf("%s%s",
         c > 0 ? "You are speeding and your fine is $"
               : "Congratulations, you are within the speed limit!",
         c > 30   ? "500."
         : c > 20 ? "270."
         : c > 0  ? "100."
                  : "",
         c = b - a, scanf("%d%d", &a, &b));
}