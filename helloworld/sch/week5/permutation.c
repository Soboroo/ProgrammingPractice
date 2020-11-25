#include <stdio.h>

int factorial(int);

int main(){
    int n = 10, r = 5, nPr;

    nPr = factorial(n) / factorial(n - r);

    printf("nPr is %d.", nPr);
    return 0;
}

int factorial(int num){
    int i, result = 1;

    for (i = 1; i <= num; i++)
        result *= i;

    return result;
}