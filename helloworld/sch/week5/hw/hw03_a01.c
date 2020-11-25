#include <stdio.h>

int power(int, int);

int main(){
    int base = 5, exp = 3;

    printf("The %dth power of %d is %d.\n", exp, base, power(base, exp));

    return 0;
}

int power(int base, int exp){
    int i, pow;
    for (i = 0, pow = 1; i < exp; i++, pow*=base);
    return pow;
}