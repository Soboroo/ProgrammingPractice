#include <stdio.h>

int main()
{
    int number;
    char sex;

    printf("번호 : ");
    scanf("%d", &number);

    fflush(stdin);

    printf("남자(M) / 여자(F) : ");
    sex = getchar();

    printf("\n번호 : %d", number);
    printf("\n성별 : %c \n", sex);
    return 0;
}