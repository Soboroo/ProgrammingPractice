#include <stdio.h>

int main(){
    int i = 9, n;
    scanf("%d", &n);
    while(i > 0){ //9���� 1���� : 9ȸ �ݺ�
        printf("%d\n", n * i); //n�� i�� : n�� 9��, 8�� ... 1��
        i--;
    }
    return 0;
}