#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second) {
  if (*(int *)first > *(int *)second)
    return 1;
  else if (*(int *)first < *(int *)second)
    return -1;
  else
    return 0;
}

int main(a) {
  scanf("%d", &a);
  int temp = 0;
  int *arr1 = (int *)malloc(sizeof(int) * a);
  int *arr2 = (int *)malloc(sizeof(int) * a);
  int *arr3 = (int *)malloc(sizeof(int) * a);
  for (int i = 0; i < a; i++) {
    scanf("%d", &arr1[i]);
    arr2[i] = arr1[i];
  }
  qsort(arr2, a, sizeof(int), compare);
  for (int i = 0, j = 0; i < a; i++) {
    temp = arr2[i]
  }
}