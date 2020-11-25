#include <stdio.h>

int main(){
    int i, n = 5;
    int iArr[5];

    for (i = 0; i < n; i++)
        iArr[i] = 0;

    printf("Input five numbers:");

    for (i = 0; i < n; i++)
        scanf("%d", &iArr[i]);

    for (i = 0; i < n; i++)
        printf("%d\n", iArr[i]);

    return 0;
}