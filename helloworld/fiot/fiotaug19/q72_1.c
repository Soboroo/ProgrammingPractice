#include <stdio.h>

int main(){
    int i = 0, n, sum = 0;
    while(i < 5){ //0���� 4���� : 5ȸ �ݺ�
        do{
            scanf("%d", &n); //�ϴ� �Է� �ް�
        }while(n < 1); //�Է°� 1 �̸��̸� �ٽ� ������

        sum+=n;
        i++;
    }
    printf("%d", sum);
    return 0;
}