#include <stdio.h>

int main()
{
    int number;
    char addr[10], name[20], vote;

    printf("������ȣ : ");
    scanf("%d", &number);

    fflush(stdin);

    printf("�ּ� : ");
    gets(addr);

    printf("�̸� : ");
    gets(name);

    printf("����-Y �ݴ�-N : ");
    vote = getchar();

    printf("\n\n������ȣ : %d\n�ּ� : %s\n�̸� : %s\n��ǥ : %c\n", number, addr, name, vote);
    return 0;
}