#include <stdio.h>

int main()
{
    int i, ans = 0;
    char str[101];
    scanf("%s", str);
    for (i = 0; str[i] != '\000'; i++, ans++)
    {
        if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') i+=2;
        else if (((str[i] == 'l' || str[i] == 'n') && str[i+1] == 'j') || ((str[i] == 'c' || str[i] == 's' || str[i] == 'z') && str[i+1] == '=') || ((str[i] == 'c' || str[i] == 'd') && str[i+1] == '-')) i+=1;
    }
    printf("%d", ans);
    return 0;
}