#include <stdio.h>

int main()
{
    char first, middle, last;
    int age;

    printf("이름의 영문약자 3자와, 나이를 입력하세요: ");
    scanf("%c%c%c %d", &first, &middle, &last, &age);
    printf("안녕하세요 %c%c%c. 내년에 당신은 %d살이 됩니다.\n", first, middle, last, age+1);

    return 0;

}