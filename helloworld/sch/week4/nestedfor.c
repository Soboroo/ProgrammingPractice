#include <stdio.h>

int main(){
    int i, j, k = 0;

    for (i = 1; i <= 9; i++){
        for (j = 1; j <= 9; j++){
            k = i * j;
            printf("%-2d ", k);
        }
        printf("\n");
    }

    return 0;
}