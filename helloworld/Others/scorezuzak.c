#include <stdio.h>

int main()
{
    int n, i, sum = 0, max = 0;
    scanf("%d", &n);
    int sc[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &sc[i]);
        if (sc[i] > max) max = sc[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += sc[i];
    }
    printf("%f", ((float)sum / max * 100) / n);
}