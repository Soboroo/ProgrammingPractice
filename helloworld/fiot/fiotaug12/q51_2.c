#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%f\n%f\n%f\n%f", a + b, a - b, a * b, a / b);
    return 0;
}