#include <stdio.h>

int main(){
    int x1, y1, x2, y2;
    printf("�� ����� x, y ��ǥ : ");
    scanf("%d %d", &x1, &y1);
    printf("�� �ϴ��� x, y ��ǥ : ");
    scanf("%d %d", &x2, &y2);
    printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", (x2-x1) * (y2-y1));
    return 0;
}