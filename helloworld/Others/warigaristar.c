#include <stdio.h>

int main()
{
    int n, i, j;
    char a;

    scanf("%d", &n);
    for (i = 1; i <= 2 * n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            a = (i + j) % 2 == 0 ? '*' : ' ';
            printf("%c", a); 
        }
        printf("\n");
    }
}