#include <stdio.h>
#include <windows.h>

 
int main()
{
    system("chcp 949");
    printf("���ڿ��� �Է��� ���͸� ��������!\n");

    char a[256];
    scanf("%s", a);

    printf(" \" %s \" �� �Է��ϼ̳׿�.\n", a);
    return 0;
}