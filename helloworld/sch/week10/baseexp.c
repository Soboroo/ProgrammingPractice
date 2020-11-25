#include <stdio.h>

int power(int *, int *);

int main(){
    int base = 5, exp = 3;

    printf("The %dth power of %d is %d.\n", exp, base, power(&base, &exp));
    return 0;
}

int power(int *b, int *e){
    int i, result = 1;

    for (i = 1; i <= *e; i++)
        result *= *b;

    return result;
}