#include <stdio.h>

int main()
{
    char name[10], addr[30];

    printf("이름 : ");
    gets(name);

    printf("주소 : ");
    gets(addr);

    printf("\n\n이름 : %s", name);
    printf("\n주소 : %s \n", addr);
    return 0;
}