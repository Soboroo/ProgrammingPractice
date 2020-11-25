#include <stdio.h>
#include <math.h>

int main()
{
    int i, num[6];
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    printf("%d", (int)(pow(num[0], 2) + pow(num[1], 2) + pow(num[2], 2) + pow(num[3], 2) + pow(num[4], 2)) % 10);
}