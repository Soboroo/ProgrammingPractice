#include <stdio.h>

int main(){
    int i, j, n, m;
    printf("���簢���� ����մϴ�.\n���� : ");
    scanf("%d", &n);
    printf("�ʺ� : ");
    scanf("%d", &m);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}