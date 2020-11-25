#include <stdio.h>
int main()
{
    int score;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

    if (score >= 60)
        printf("합격입니다! \n");
    printf("당진의 점수는 %d점 입니다. \n", score);
    return 0;
}