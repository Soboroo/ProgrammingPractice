#include <stdio.h>

int main()
{
    int a, i;
    int min = 1000000;
    int max = -1000001;
    scanf("%d", &a);
    int arr[a];

    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("%d %d", min, max);
}