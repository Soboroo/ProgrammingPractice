#include <stdio.h>

int main()
{
    int a, i, arr[9], max = 0;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (i != 0 && arr[i] > max) 
        {
            max = arr[i];
            a = i + 1;
        }
    }
    max = max > arr[0] ? max : arr[0];
    if (max == arr[0]) a = 1;
    printf("%d\n%d", max, a);
    return 0;
}