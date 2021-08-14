#include <stdio.h>
#include <stdlib.h>

int main(a, b) {
  scanf("%d %d", &a, &b);
  int *arr = (int *)calloc(a, sizeof(int));
  arr[b - 1] = 1;
  printf("<%d%s", b, a == 1 ? ">" : ", ");
  for (int i = 1, index = b; i < a; i++) {
    for (int j = 0; j < b; arr[index++ % a] ? j : j++)
      ;
    arr[--index % a] = 1;
    printf("%d%s", index++ % a + 1, i == a - 1 ? ">" : ", ");
  }
}