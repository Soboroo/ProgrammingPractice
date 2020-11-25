#include <stdio.h>

int main()
{
    int i, j, cas, stack = 0, sum;
    char ox[81];
    scanf("%d", &cas);
    int score[cas+1];

    for (i = 0; i < cas; i++)
    {
        scanf("%s", ox);
        for (j = 0; ox[j] != '\000'; j++)
        {
            stack = ox[j] == 79 ? stack += 1 : 0;
            sum += stack;
        }
        score[i] = sum;
        sum = stack = 0;
    }
    for (i = 0; i < cas; i++)
    {
        printf("%d\n", score[i]);
    }
    return 0;
}