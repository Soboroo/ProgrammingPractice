#include <stdio.h>

int main() {
  char a[5];
  int i;
  double j;
  scanf("%d %e %s", &i, &j, a);
  printf("%4d %f %2s", i, j, a);
}