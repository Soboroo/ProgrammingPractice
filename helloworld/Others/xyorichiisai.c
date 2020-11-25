#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    int num[a];

    for (i = 0; i <= a - 1; i++)
    {
        scanf("%d", &num[i]); 
    }
    for (i = 0; i <= a - 1; i++)
    {
        if (num[i] < b)
        {
            printf("%d ", num[i]);
        }
    }

}