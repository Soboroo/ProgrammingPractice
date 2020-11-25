#include <stdio.h>

void nrpira(int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 1; j <= -2 * (i-n+1) + 1; j++)
            printf("%d", (i+1) % 10);
        printf("\n");
    }
}

int main(){
    nrpira(18);
    return 0;
}