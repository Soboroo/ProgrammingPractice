#include <stdio.h>

int main()
{
    int num;

    printf("���� : ");
    scanf("%d", &num);

    num % 2 == 1 ? printf("Ȧ����\n") : printf("¦����\n");

    return 0;
}