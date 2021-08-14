int main() {
  int a, b, min = 1000001, max = 1;
  scanf("%d", &a);
  for (int i = 0; i < a; i++) {
    scanf("%d", &b);
    if (b > max)
      max = b;
    if (b < min)
      min = b;
  }
  printf("%d", min * max);
}