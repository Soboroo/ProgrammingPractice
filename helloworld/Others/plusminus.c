#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;

    a = ++a * 10;
    b = b++ * 10;
    c = 10 - --c;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}