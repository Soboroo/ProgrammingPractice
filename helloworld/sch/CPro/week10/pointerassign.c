#include <stdio.h>

int main(){
    int i1 = 0, i2 = 0;
    int *pi1, *pi2;
    pi1 = &i1;
    pi2 = &i2;

    *pi1 = 1;
    *pi2 = *pi1;
    (*pi1)++;
    printf("i1, i2, *pi1, *pi2 is %d %d %d %d.\n", i1, i2, *pi1, *pi2);

    pi1 = pi2;
    (*pi1)++;
    printf("i1, i2, *pi1, *pi2 is %d %d %d %d.\n", i1, i2, *pi1, *pi2);

    return 0;
}