#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    y = ((((float)b * c / a) - f) / (((float)b * d / a) - e));
    x = (c - (b * y)) / a;
    printf("%d %d", x, y);
    return 0;
}