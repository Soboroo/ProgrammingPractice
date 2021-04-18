#include <stdio.h>
#define M 9

int main(){
    int table[M][M];
    int i, j;

    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
            table[i][j] = (i + 1) * (j + 1);
        }
    }
    
    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
            printf("%d * %d = %2d ", i + 1, j + 1, table[i][j]);
        }
        printf("\n");
    }
    return 0;
}