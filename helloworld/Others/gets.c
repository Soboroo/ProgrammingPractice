#include <stdio.h>

int main()
{
    char name[10], addr[30];

    printf("捞抚 : ");
    gets(name);

    printf("林家 : ");
    gets(addr);

    printf("\n\n捞抚 : %s", name);
    printf("\n林家 : %s \n", addr);
    return 0;
}