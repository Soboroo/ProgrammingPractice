#include <stdio.h>

int main()
{
    int a, b, c, i, j, ans = 0;
    char num[10];
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sprintf(num, "%d", a * b * c);
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; num[j] != '\000'; j++)
        {
            if (num[j] == (char)(i+48)) ans += 1;
        }
        printf("%d\n", ans);
        ans = 0;
    }
}