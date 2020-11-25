#include <stdio.h>

int main()
{
    int x, y;
    char op;

    printf("2개의 숫자와\n");
    printf("+ - * / %% 중\n");
    printf("하나를 입력하세요 : ");
    scanf("%d %d %c", &x, &y, &op);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d\n", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d\n", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d\n", x, y, x / y);
        break;
    case '%':
        printf("%d %% %d = %d\n", x, y, x % y);
        break;
    
    default:
        printf("연산자를 잘못 입력했습니다");
        break;
    }
    return 0;
}