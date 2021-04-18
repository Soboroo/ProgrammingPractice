#include <stdio.h>

int main(){
    int i, sum = 0, n = 3;
    int iAr[3];

    for (i = 0; i < n; i++)
        iAr[i] = 0;

    printf("Input three numbers:");

    for (i = 0; i < n; i++)
        scanf("%d", &iAr[i]);

    for (i = 0; i < n; i++)
        sum += iAr[i];

    printf("Sum is %d.", sum);

    return 0;
}