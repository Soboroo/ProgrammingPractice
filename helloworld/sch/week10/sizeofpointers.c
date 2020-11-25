#include <stdio.h>

int main(){
    char c;
    int i;
    long l;
    float f;
    double d;

    char *pc = &c;
    int *pi = &i;
    long *pl = &l;
    float *pf = &f;
    double *pd = &d;

    printf("sizeof(c): %d, sizeof(pc): %d\n", sizeof(c), sizeof(pc));
    printf("sizeof(i): %d, sizeof(pi): %d\n", sizeof(i), sizeof(pi));
    printf("sizeof(l): %d, sizeof(pf): %d\n", sizeof(l), sizeof(pl));
    printf("sizeof(f): %d, sizeof(pf): %d\n", sizeof(f), sizeof(pf));
    printf("sizeof(d): %d, sizeof(pd): %d\n", sizeof(d), sizeof(pd));

    return 0;
}