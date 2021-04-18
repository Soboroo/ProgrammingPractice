#include <stdio.h>

int main(){
    int i, j, k = 0;

    i = 1;
    while (i <= 9){
        j = 1;
        while (j <= 9){
            k = i * j;
            printf("%-2d ", k);
            j++;
        }
        printf("\n");
        i++;
    }
}