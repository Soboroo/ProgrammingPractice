#include <stdio.h>
#include <stdlib.h>

int n;
int *weight = NULL;
int countTeams(int h, int wA, int wB, int wC) {
  int result = 0;
  if (n == h)
    return wA == wB && wB == wC;
  for (int i = 0; i < 4; i++)
    result += countTeams(h + 1, wA + (i == 1 ? weight[h] : 0),
                         wB + (i == 2 ? weight[h] : 0),
                         wC + (i == 3 ? weight[h] : 0));
  return result;
}

int main() {
  int a;
  scanf("%d", &a);
  for (int i = 0; i < a; i++) {
    scanf("%d", &n);
    weight = (int *)calloc(n, sizeof(int));
    for (int j = 0; j < n; j++) {
      scanf("%d", weight + j);
    }
    printf("%d\n", countTeams(-1, 0, 0, 0));
    free(weight);
  }
}