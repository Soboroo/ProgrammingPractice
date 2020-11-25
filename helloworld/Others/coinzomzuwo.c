#include <stdio.h>

int main()
{
    int check;

    printf("수표 금액 : ");
    scanf("%d", &check);

    check -= (check * 0.001);
    printf("수수료 제외 금액 %d원\n\n", check);

    printf("500원 동전 %d개\n", (int)check / 500);
    check -= (int)check / 500 * 500;

    printf("100원 동전 %d개\n", (int)check / 100);
    check -= (int)check / 100 * 100;

    printf("50원 동전 %d개\n", (int)check / 50);
    check -= (int)check / 50 * 50;

    printf("10원 동전 %d개\n", (int)check / 10);
    check -= (int)check / 10 * 10;

    printf("1원 동전 %d개\n", (int)check);

}