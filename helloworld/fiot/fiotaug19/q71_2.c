#include <stdio.h>

int main(){
    int i = 1, n;
    scanf("%d", &n);
    while(i <= n){ //1���� n���� : nȸ �ݺ�
        printf("%d\n", 3 * i); //3�� i�� : 1��, 2�� ... n��
        i++;
    }
}