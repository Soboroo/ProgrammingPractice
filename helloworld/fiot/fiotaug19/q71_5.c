#include <stdio.h>

int main(){
    int i = 0, n, a, sum = 0;
    scanf("%d", &n);
    while(i < n){ //0���� n-1���� : nȸ �ݺ�
        scanf("%d", &a);
        sum+=a;
        i++;
    }
    printf("%f", (double)sum / n); //sum �ڷ��� double�� ��Ⱥ �� ��� ���
    return 0;
}