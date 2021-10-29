#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
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

  freopen("input.txt", "r", stdin);

  int T = 0;

  scanf_s("%d", &T);

  for (int i = 0; i < T; i++) { //테스트 케이스
    int clothesP[MAX_N + 1];
    int result = 0;
    int N;

    scanf_s("%d", &N); //옷 개수

    for (int j = 1; j <= N; j++) {
      scanf_s("%d", &clothesP[j]); //옷 가격
    }

    quickSort(clothesP, 0, N - 1);

    for (int i = 0; i < N; i++) {
      switch ((N - 1 - i) % 3) {
      case 2:
        break;
      default:
        result += clothesP[i];
        break;
      }
    }
    printf("%d\n", result);
  }
}