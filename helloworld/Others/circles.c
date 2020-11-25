#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, n, j, sum;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        for (j = y + 1; j <= y + sqrt(pow(x, 2) + pow(y, 2)); j++)
        {
            sum += 2 * ((int)(sqrt(pow(x, 2) + pow(y, 2) - pow(j - y, 2)) + x) - j) + 1;
        }
        sum = sum * 2 + (2 * (int)sqrt(pow(x, 2) + pow(y, 2)) + 1);
    }
    printf("%d", sum);
}