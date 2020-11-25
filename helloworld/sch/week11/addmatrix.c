#include <stdio.h>
#define M 3
#define N 2

int main(){
    int A[M][N] = {{1, 2}, {3, 4}, {5, 6}};
    int B[M][N] = {{1, 0}, {0, 1}, {1, 0}};
    int i, j;

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++)
            A[i][j] += B[i][j];
    }

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}