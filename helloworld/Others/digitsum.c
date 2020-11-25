#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    char digit[n];
    scanf("%s", digit);
    for (i = 0; i < n; i++)
    {
        sum += digit[i] - 48;
    }
    printf("%d", sum);
}