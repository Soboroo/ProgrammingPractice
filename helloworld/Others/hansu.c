#include <stdio.h>
#include <stdlib.h>


int hansu(int n)
{
    if (n < 100) return n;
    int i, j, ans = 99;
    char digit[5];
    for (i = 100; i <= n; i++)
    {
        sprintf(digit, "%d", i);
        ans = (int)digit[1] - (int)digit[0] == (int)digit[2] - (int)digit[1] ? ans+=1 : ans;
    }
    return ans;
}

int main()
{
    int input;
    scanf("%d", &input);
    printf("%d", hansu(input));
}