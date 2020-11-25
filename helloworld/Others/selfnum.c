#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, num[10001], dsum = 0;
    char digit[6];

    for (i = 1; i <= 10000; i++)
    {
        sprintf(digit, "%d", i);
        for (j = 0; digit[j] != '\000'; j++)
        {
            dsum += (int)digit[j] - 48;
        }
        num[i-1] = i + dsum;
        dsum = 0;
    }
    printf("1\n");
    for (i = 1; i <= 10000; i++)
    {
        for (j = 1; j <= 10001; j++)
        {
            if (i == num[j-1]) break;
            if (j == 10001) printf ("%d\n", i);
        }
    }

}