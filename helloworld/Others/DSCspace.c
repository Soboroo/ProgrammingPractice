#include <stdio.h>

int main(void)
{
    double city, rush, exp, average;

    city = 12.9;
    rush = 10.7;
    exp = 15.8;

    average = (city + rush + exp) / 3;

    puts("== ���� �׽�Ʈ ==\n");
    printf("%-9s = %5.1lfkm \n", "����", city);
    printf("%-9s = %5.1lfkm \n", "���þƿ�", rush);
    printf("%-9s = %5.1lfkm \n\n", "��ӵ���", exp);
    printf("%-9s = %6.2lfkm \n", "��տ���", average);
    return 0;
}