#include <stdio.h>
int main()
{
    int score;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &score);

    if (score >= 60)
        printf("�հ��Դϴ�! \n");
    printf("������ ������ %d�� �Դϴ�. \n", score);
    return 0;
}