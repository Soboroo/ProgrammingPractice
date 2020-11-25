#include <stdio.h>
#define M 2
#define N 3

void printM2Da(int [][N]);
void printM2Dp(int (*)[N]);

int main(){
    int B[M][N] = {{1, 0, 0}, {0, 1, 0}};

    printM2Dp(B);
    printM2Da(B);
    return 0;
}

void printM2Da(int a[][N]){
    int i, j;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}


void printM2Dp(int a[][N]){
    int i, j;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%d ", (*(a+i))[j]);
        }
        printf("\n");
    }
}