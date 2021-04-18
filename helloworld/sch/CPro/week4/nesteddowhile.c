#include <stdio.h>

int main(){
    int i, j, k = 0;
    
    i = 1;
    do {
        j = 1;
        do {
            k = i * j;
            printf("%-2d ", k);
            j++;
        } while (j <= 9);
        printf("\n");
        i++;
    } while (i <= 9);

    return 0;
}