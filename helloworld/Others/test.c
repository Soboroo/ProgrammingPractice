#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, dsum = 0;
    char num[6];
    scanf("%d", &a);
    sprintf(num, "%d", a);
    for (i = 0; num[i] != '\000'; i++)
    {
        dsum += (int)num[i];
    }
    printf("%d", dsum);
}