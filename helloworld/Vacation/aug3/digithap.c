#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, i, j, k, dh = 0;
    scanf("%d", &a);
    char digit[8];
    for (i = 1; i <= a; i++){
        sprintf(digit, "%d", i);
        for (j = 0; digit[j] != '\0'; j++) dh+=(int)digit[j] - 48;
        if (i + dh == a){
            printf("%d", i);
            break;
        }
        else if (i == a) printf("0");
        dh = 0;
    }
    return 0;
}