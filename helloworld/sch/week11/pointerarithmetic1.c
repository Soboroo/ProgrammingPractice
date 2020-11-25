#include <stdio.h>

int main(){
    int iArr[10];
    int *p, i, x;

    for (i = 0; i < 10; i++)
        iArr[i] = i;
    
    p = iArr;
    for (i = 0; i < 10; i++){
        x = *p;
        printf("%d, ", x); p++;
    }
    printf("\n");
    

    p = iArr;
    for (i = 0; i < 10; i++)
        printf("%d, ", *(p++));
    printf("\n");

    return 0;
}