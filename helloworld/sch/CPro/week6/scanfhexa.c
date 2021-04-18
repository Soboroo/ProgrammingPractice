#include <stdio.h>

int main(){
    int i;
    while (1){
        printf("Inpur 10- base integer i:");
        scanf("%d", &i);
        printf("i is 0x%08x.\n", i);
    }
    return 0;
}