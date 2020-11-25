#include <stdio.h>
#include <stdlib.h>

void prn_random_numbers(int);
int mintest(int, int);
int maxtest(int, int);

int main(){
    int n;
    printf("난수들이 출력될 것입니다\n");
    printf("몇 개의 난수를 만들까요 : ");
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
    printf("\n\n%d개의 난수가 출력되었습니다.\n", k);
    printf("최소값 : %7d\n최대값 : %7d\n\n", smallest, biggest);
}
int mintest(int item, int smallest){
    if (item < smallest) return item;
    else return smallest;
}
int maxtest(int item, int biggest){
    if (item > biggest) return item;
    else return biggest;
}
