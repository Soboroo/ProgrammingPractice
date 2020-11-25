#include <stdio.h>

int main()
{
    int number;
    double height;
    char sex;

    printf("번호 : ");
    scanf("%d", &number);

    printf("신장 : ");
    scanf("%lf", &height);

    fflush(stdin);

    printf("성별(M / F) : ");
    scanf("%c", &sex);

    printf("\n\n==결과출력==");
    printf("\n번호 : %d", number);
    printf("\n신장 : %.1lf", height);
    printf("\n성별 : %c", sex);

    return 0;
}