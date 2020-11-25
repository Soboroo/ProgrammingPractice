#include <stdio.h>

int main(){
    double a, pi = 3.14159265359;
    scanf("%lf", &a);
    printf("%f %f", pi * a * a, 2 * a * a);
    return 0;
}