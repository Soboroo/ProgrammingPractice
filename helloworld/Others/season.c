#include <stdio.h>

int main()
{
    int month;

    printf("���� �Է��ϼ��� : ");
    scanf("%d", &month);

    switch (month / 3)
    {
    case 1:
        printf("���Դϴ�.\n");
        break;
    case 2:
        printf("�����Դϴ�.\n");
        break;
    case 3:
        printf("���Դϴ�.\n");
        break;
    case 4: case 0:
        printf("���Դϴ�.\n");
        break;
    
    default:
        break;
    }
}