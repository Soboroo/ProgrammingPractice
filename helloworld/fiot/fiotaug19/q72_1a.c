#include <stdio.h>

int main(){
    int i = 0, n, sum = 0;
    while(i < 5){ //0���� 4���� : 5ȸ �ݺ�
        while(1){
            scanf("%d", &n);
            if (n >= 1) break; //�Է°��� 1 �̻��̸� �ݺ��� Ż�� -> 1�̸��̸� �ٽ� �Է�
        }

        sum+=n;
        i++;
    }
    printf("%d", sum);
    return 0;
}