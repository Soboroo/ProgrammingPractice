#include <stdio.h>

void spira(int n){
    int i, j;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n-i; j++){
            printf(" ");
        }
        for (j = 1; j <= (i-1) * 2 + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}

int main(){
    spira(5);
    return 0;
}