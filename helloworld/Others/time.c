#include <stdio.h>

int main(void)
{
    double time = 0.5678;
    int minute, second;

    time *= 60;
    minute = time;

    time -= minute;
    second = time * 60;

    printf("Ка: %d\n", minute);
    printf("УЪ: %d\n", second);

    return 0;
}