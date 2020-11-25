#include <stdio.h>

int main()
{
    int i, l = 0, n = 0;
    char str[1000001];
    gets(str);
    for (i = 0; str[i] != '\000'; i++) l += 1;
    for (i = 0; i < l; i++) if (str[i] != 32 && (str[i+1] == 32 || str[i+1] == '\000')) n += 1;
    printf("%d", n);
    return 0;
}