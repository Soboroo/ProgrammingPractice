#include <stdio.h>

int main()
{
    int x, y;
    char op;

    printf("2���� ���ڿ�\n");
    printf("+ - * / %% ��\n");
    printf("�ϳ��� �Է��ϼ��� : ");
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
        printf("�����ڸ� �߸� �Է��߽��ϴ�");
        break;
    }
    return 0;
}