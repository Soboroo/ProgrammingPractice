#include <stdio.h>

int main()
{
    int tot;
    float ave;
    char name[10];

    printf("����, ���, �̸��� �Է��ϼ��� : ");
    scanf("%d, %f, %s", &tot, &ave, name);

    printf("����: %d\n", tot);
    printf("���: %5.2f\n", ave);
    printf("�̸�: %s\n", name);

    return 0;
}