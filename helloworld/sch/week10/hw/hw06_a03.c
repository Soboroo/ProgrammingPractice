#include <stdio.h>

int factorial(int);
void getpermu(int, int, int *);
void getcombi(int, int, int *);

int main(){
    int n = 4, r = 2, nPr = 0, nCr = 0;
    getpermu(n, r, &nPr);
    getcombi(n, r, &nCr);
    printf("nPr is %d, and nCr is %d.", nPr, nCr);
    return 0;
}

void getpermu(int n, int r, int *pp){
    *pp = factorial(n) / factorial(n-r);
}

void getcombi(int n, int r, int *pc){
    getpermu(n, r, pc);
    *pc /= factorial(r);
}

int factorial(int n){
    return !n ? 1 : n * factorial(n-1);
}