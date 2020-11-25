#include <stdio.h>

int main()
{
    int n, i = 1, a = 2;
    scanf("%d", &n);
    if (n == 1){ 
    printf("1");
    return 0;}
    while (1)
    {
        if (n >= a && n <= a + (6 * i) - 1){
            printf("%d", i+1);
            return 0;
        }
        a+=6 * i;
        i++;
    }
}