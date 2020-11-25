#include <stdio.h>

int main(){
    int intArr[5] = {6, 1, 23, 56, -3};

    float fArr[4] = {1.3, 5.0, -2.3, 3.14};
    int i;

    for (i = 0; i < 5; i++)
        printf("%d, ", intArr[i]);

    printf("\n");

    for (i = 0; i < 4; i++)
        printf("%.2f, ", fArr[i]);

    return 0;
}