#include <stdio.h>

int main()
{
    int n;
    int num = 0;

    scanf("%d", &n);

    for (;;num++)
    {
        n -= 5;
        if(n % 3 == 0) break;
    }
    for (;;num++)
    {
        n -= 3;
        if(n - 3 < 0){
            printf("-1");
            break;
        } 
        else if (n == 0)
        {
            printf("%d", num);
            break;
        }
    }
}