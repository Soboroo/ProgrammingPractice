#include <stdio.h>


int main()
{
    int a, b, i, n = 0;
    scanf("%d %d", &a, &b);
    char bod[a+1][b+1];
    for (i = 0; i < b; i++, n++)
    {
        scanf("%s", bod[n]);
    }

}
