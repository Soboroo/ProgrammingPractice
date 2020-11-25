#include <stdio.h>

int main()
{
    int i, j;
    char str[101];
    scanf("%s", str);
    for (i = 97; i <= 122; i++)
    {
        for (j = 0; str[j] != '\000'; j++)
        {
            if (str[j] == i) 
            {
                printf("%d ", j);
                break;
            }
        }
        if (str[j] == '\000') printf("-1 ");
    }
}