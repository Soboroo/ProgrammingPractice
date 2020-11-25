#include <stdio.h>
#include <stdlib.h>

void prn_random_numbers(int);
int mintest(int, int);
int maxtest(int, int);

int main(){
    int n;
    printf("�������� ��µ� ���Դϴ�\n");
    printf("�� ���� ������ ������ : ");
    scanf("%d", &n);

    prn_random_numbers(n);
    return 0;
}

void prn_random_numbers(int k){
    int i, r, smallest, biggest;

    r = smallest = biggest = rand();
    printf("\n%6d", r);

    for (i = 1; i < k; i++){
        if (i % 5 == 0) printf("\n");
        r = rand();
        smallest = mintest(r, smallest);
        biggest = maxtest(r, biggest);
        printf("%6d", r);
    }
    printf("\n\n%d���� ������ ��µǾ����ϴ�.\n", k);
    printf("�ּҰ� : %7d\n�ִ밪 : %7d\n\n", smallest, biggest);
}
int mintest(int item, int smallest){
    if (item < smallest) return item;
    else return smallest;
}
int maxtest(int item, int biggest){
    if (item > biggest) return item;
    else return biggest;
}
