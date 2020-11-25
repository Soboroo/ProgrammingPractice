#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= 2*n-1; i++)
    {
        for (j = 1; j <= -1 * abs((i - 1) - (n-1)) + (n-1); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= abs(2 * (i - n)) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}