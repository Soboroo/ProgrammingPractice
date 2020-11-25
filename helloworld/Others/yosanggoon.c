#include <stdio.h>

int main()
{
    int b = 2000;
    int n = 2000;
    int bb, nn;

    for (int i = 1; i <= 3; i++)
    {
       scanf("%d", &bb);
       if (bb < b) b = bb; 
    }
    for (int i = 1; i <= 2; i++)
    {
       scanf("%d", &nn);
       if (nn < n) n = nn; 
    }
    printf("%d", b + n - 50);
}