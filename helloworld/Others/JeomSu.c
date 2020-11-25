#include <stdio.h>

int main()
{
    int ans;
    int sum = 0;
    
    for(int i = 1; i <= 5; i++)
    {
        scanf("%d", &ans);
        if (ans < 40) sum +=40;
        else sum += ans;
    }
    printf("%d", sum / 5);
}