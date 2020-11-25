#include <stdio.h>

int main()
{
    int i, j, a, b, e;
    scanf("%d %d %d", &a, &b, &e);
    int dirt[a][b];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &dirt[i][j]);
        }
    }
}