#include <stdio.h>

int main()
{
    int check;

    printf("��ǥ �ݾ� : ");
    scanf("%d", &check);

    check -= (check * 0.001);
    printf("������ ���� �ݾ� %d��\n\n", check);

    printf("500�� ���� %d��\n", (int)check / 500);
    check -= (int)check / 500 * 500;

    printf("100�� ���� %d��\n", (int)check / 100);
    check -= (int)check / 100 * 100;

    printf("50�� ���� %d��\n", (int)check / 50);
    check -= (int)check / 50 * 50;

    printf("10�� ���� %d��\n", (int)check / 10);
    check -= (int)check / 10 * 10;

    printf("1�� ���� %d��\n", (int)check);

}