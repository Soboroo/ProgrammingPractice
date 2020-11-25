#include <stdio.h>
#include <math.h>

int main(){
    int a, i, j;
    scanf("%d", &a);
    for (i = 0; i < 2 * a - 1; i++){
        for (j = 0; j < abs(i - a + 1); j++) printf(" ");
        for (j = 0; j < -(abs(2 * i - (2 * a - 2))) + (2 * a - 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}