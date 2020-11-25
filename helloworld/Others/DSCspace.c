#include <stdio.h>

int main(void)
{
    double city, rush, exp, average;

    city = 12.9;
    rush = 10.7;
    exp = 15.8;

    average = (city + rush + exp) / 3;

    puts("== 연비 테스트 ==\n");
    printf("%-9s = %5.1lfkm \n", "도심", city);
    printf("%-9s = %5.1lfkm \n", "러시아워", rush);
    printf("%-9s = %5.1lfkm \n\n", "고속도로", exp);
    printf("%-9s = %6.2lfkm \n", "평균연비", average);
    return 0;
}