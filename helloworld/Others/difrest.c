#include <stdio.h>

int main()
{
    int i, j, num[10], rest[10], ans = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        rest[i] = num[i] % 42;
    }
    for (i = 0; i <= 41; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (rest[j] == i)
            {
                ans += 1;
                break;
            } 
        }
    }
    printf("%d", ans);
}