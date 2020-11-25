#include <stdio.h>

int main()
{
    int a, i;
    
    scanf("%d", &a);
        
    for (i = 1; i <= a; i++)
    {
        for (int n = 1; n <= (a - i); n++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}