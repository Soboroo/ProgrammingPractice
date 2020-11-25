#include <stdio.h>

int main()
{
    int i, j, time = 0, chr = 65;
    char num[16];
    scanf("%s", num);
    for (i = 0; num[i] != '\000'; i++)
    {
        for (j = 2; j <= 9; j++)
        {
            if (j == 7 || j == 9)
            {
                if (num[i] >= chr && num[i] <= chr + 3) time += j + 1;
                chr+=4;
            }
            else
            {
                if (num[i] >= chr && num[i] <= chr + 2) time += j + 1; 
                chr+=3;
            }
        }
    chr = 65;
    }
    printf("%d", time);
    return 0;
}