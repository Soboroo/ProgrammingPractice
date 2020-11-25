#include <stdio.h>

int main(void)
{
    double d = 12.345;

    printf("d=  %.3lf\n", d);
    printf("d=  %.1lf\n", d);
    printf("d=%.3lf\n", d);
    printf("d=%.6lf\n", d);
    
    return 0;
}