#include <stdio.h>

int main()
{
    int number;
    double height;
    char sex;

    printf("��ȣ : ");
    scanf("%d", &number);

    printf("���� : ");
    scanf("%lf", &height);

    fflush(stdin);

    printf("����(M / F) : ");
    scanf("%c", &sex);

    printf("\n\n==������==");
    printf("\n��ȣ : %d", number);
    printf("\n���� : %.1lf", height);
    printf("\n���� : %c", sex);

    return 0;
}