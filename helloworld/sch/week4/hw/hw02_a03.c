#include <stdio.h>

int main(){
    int i = 0, j;
    while (i < 5){
        j = 0;
        while (j < i){
            printf(" ");
            j++;
        }
        if (i%2) printf("O");
        else printf("X");
        printf("\n");
        i++;
    }
    return 0;
}