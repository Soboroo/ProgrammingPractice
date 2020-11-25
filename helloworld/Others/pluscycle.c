#include <stdio.h>

int main()
{
    int i, num;

    scanf("%d", &i);

    if (i < 10) i *= 10;
    int j = i;

    for (num = 0;; num++)
    {
        i = (((i / 10) + (i % 10)) % 10) + (10 * (i % 10));
        if (i == j) break;
    }
    printf("%d", num+1);
}