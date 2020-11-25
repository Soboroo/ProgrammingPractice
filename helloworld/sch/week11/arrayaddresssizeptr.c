#include <stdio.h>
#define N 5

int main(){
    char cArr[N] = {'H', 'e', 'l', 'l', 'o'};
    int iArr[N] = {0, 1, 2, 3, 4};
    double dArr[N] = {0.0, 1.1, 2.2, 3.3, 4.4};
    char *pc; int *pi; double *pd; int i;

    pc = &cArr[0]; pi = &iArr[0]; pd = &dArr[0];

    printf("cArr\t\tiArr\t\tdArr\n");
    printf("%p\t%p\t%p\n", cArr, iArr, dArr);

    printf("%p\t%p\t%p\n", pc, pi, pd);

    for (i = 0; i < N; i++)
        printf("[%d]:%c\t\t[%d]:%d\t\t[%d]:%.2f\n", i, *(pc++), i, *(pi + i), i, pd[i]);
        
    printf("%p\t%p\t%p\n", pc, pi, pd);

    return 0;
}