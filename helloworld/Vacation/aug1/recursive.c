#include <stdio.h>

int sum(int);

int main(){
    int n, result;

    printf("������ ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &n);

    result = sum(n);
    printf("%d������ �� : %d\n", n, result);
    return 0;
}

int sum(int n){
    if (n <= 1) return 1;
    else return n+sum(n-1);
}