#include <stdio.h>

int main()
{
    char first, middle, last;
    int age;

    printf("�̸��� �������� 3�ڿ�, ���̸� �Է��ϼ���: ");
    scanf("%c%c%c %d", &first, &middle, &last, &age);
    printf("�ȳ��ϼ��� %c%c%c. ���⿡ ����� %d���� �˴ϴ�.\n", first, middle, last, age+1);

    return 0;

}