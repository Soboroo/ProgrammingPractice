#include <stdio.h>

int main()
{
    int month;

    printf("월을 입력하세요 : ");
    scanf("%d", &month);

    switch (month / 3)
    {
    case 1:
        printf("봄입니다.\n");
        break;
    case 2:
        printf("여름입니다.\n");
        break;
    case 3:
        printf("봄입니다.\n");
        break;
    case 4: case 0:
        printf("봄입니다.\n");
        break;
    
    default:
        break;
    }
}