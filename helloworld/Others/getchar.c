#include <stdio.h>

int main()
{
    int number;
    char sex;

    printf("��ȣ : ");
    scanf("%d", &number);

    fflush(stdin);

    printf("����(M) / ����(F) : ");
    sex = getchar();

    printf("\n��ȣ : %d", number);
    printf("\n���� : %c \n", sex);
    return 0;
}