#include <stdio.h>

int main()
{
    char name[10], addr[30];

    printf("�̸� : ");
    gets(name);

    printf("�ּ� : ");
    gets(addr);

    printf("\n\n�̸� : %s", name);
    printf("\n�ּ� : %s \n", addr);
    return 0;
}