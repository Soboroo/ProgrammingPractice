#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, *p;
    printf("Size of Allocation: ");
    scanf("%d", &a);
    p = (int*)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++){
        printf("p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < a; i++)
        printf("%d%c ", p[i], i == a-1 ?  : ',');

    free(p);

    return 0;
}