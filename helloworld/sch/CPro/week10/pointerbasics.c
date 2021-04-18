#include <stdio.h>

int main(){
    int i = 10, j = 5;
    int *ptri;

    ptri = &i;
    *ptri += i;
    printf("i is %d, *ptri is %d.\n", i, *ptri);

    ptri = &j;
    *ptri *= j;
    printf("j is %d, *ptri is %d.\n", j, *ptri);
}