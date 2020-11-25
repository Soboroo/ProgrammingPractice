#include <stdio.h>
#define M 2
#define N 3

int main(){
    char arr[M][N];
    int i, j;

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++)
            arr[i][j] = 'A' + i + j;
    }

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%c, ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}