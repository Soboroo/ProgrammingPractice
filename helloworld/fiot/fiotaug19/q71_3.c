#include <stdio.h>

int main(){
    int sum = 0, n;
    while(1){
        scanf("%d", &n);
        if (n == 0) break; //�Է°��� 0�̸� while�� Ż��
        else sum+=n; //�ƴϸ� sum�� n��ŭ ����
    }
    printf("%d", sum);
    return 0;
}