#include <stdio.h>

int main(){
    int sum = 0, n;
    do{
        scanf("%d", &n);
        sum+=n;
    }while(n != 0); //�Է°��� 0�� �ƴҶ��� �ݺ�
    printf("%d", sum);
    return 0;
}