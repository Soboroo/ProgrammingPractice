#include <stdio.h>

int main()
{
    int k, i, j, cas, sum = 0, score[1001], num = 0;
    scanf("%d", &cas);
    float percent[cas];

    for (i = 0; i < cas; i++)
    {
        scanf("%d", &k);
        for (j = 0; j < k; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        for (j = 0; j < k; j++)
        {
            if (score[j] > (float)sum / k) num += 1;
        }
        percent[i] = (float)num / k * 100;
        sum = num = 0;
    }
    for (i = 0; i < cas; i++)
    {
        printf("%.3f%%\n", percent[i]);
    }
    return 0;
}