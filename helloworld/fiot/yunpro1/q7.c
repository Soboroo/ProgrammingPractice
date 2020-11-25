#include <stdio.h>
/*
#include <math.h>

int main(){
    int num;
    printf("Number: ");
    scanf("%d", &num);
    printf("max: %d", (int)ceil((log10((double)num) / log10(2.0))));
    return 0;
}
*/

int main(){
    int i, num, a = 1;
    printf("Number: ");
    scanf("%d", &num);
    for (i = 0; a <= num; i++, a*=2);
    printf("%d", i-1);
    return 0;
}