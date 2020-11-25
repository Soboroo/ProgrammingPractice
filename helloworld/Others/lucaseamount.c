#include <stdio.h>

int main()
{
    int i, j, num, amount[26], mnum, mchr;
    num = mnum = 0;
    char input[1000000];
    scanf("%s", input);
    for (i = 65; i <= 90; i++)
    {
        for (j = 0; input[j] != '\000'; j++)
        {
            if (input[j] == i || input[j] == i + 32)
            {
                num += 1;
            }
        }
        amount[i-65] = num;
        num = 0;
    }
    for (i = 0; i < 26; i++)
    {
        if (amount[i] > mnum)
        {
            mnum = amount[i];
            mchr = i + 65;
        }
    }
    i = 0;
    for (j = 0; j < 26; j++)
    {
        if (mnum == amount[j]) i+=1;
    }
    if (i != 1) printf("?");
    else printf("%c", mchr);
    return 0;
}