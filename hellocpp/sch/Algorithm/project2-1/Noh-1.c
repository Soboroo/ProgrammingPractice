#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000

int partition(int A[], int p, int r) {
  int pivot = A[r];
  int i = p - 1;
  int temp;

  for (int j = p; j < r; j++) {
    if (A[j] >= pivot) {
      i++;
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  }
  temp = A[r];
  A[r] = A[i + 1];
  A[i + 1] = temp;

  return i + 1;
}

void quickSort(int A[], int p, int r) {
  int q;
  if (p < r) {
    q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

int main() {

  freopen("input_short.txt", "r", stdin);

  int T = 0;

  scanf("%d", &T);

  for (int i = 0; i < T; i++) { //테스트 케이스
    int clothesP[MAX_N + 1];
    int result = 0;
    int N;

    scanf("%d", &N); //옷 개수

    for (int j = 0; j < N; j++) {
      scanf("%d", &clothesP[j]); //옷 가격
    }
    quickSort(clothesP, 0, N - 1);

    printf("Sorted: ");
    for (int i = 0; i < N; i++) {
      printf("%d ", clothesP[i]);
    }
    printf("\n");

    for (int x = 0; x < N; x++) {
      if (N - 1 - x % 3 == 0 || N - 1 - x % 3 == 1) {
        result += clothesP[x];
      }
    }
    printf("%d\n", result);
  }
}