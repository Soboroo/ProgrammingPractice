#include <stdio.h>

int main()
{
    int n, k, i, j, s;
    char str[21];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %s", &k, str);
        for (j = 0; str[j] != '\000'; j++)
        {
            for (s = 1; s <= k; s++)
            {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}