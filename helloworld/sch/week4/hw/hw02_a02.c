#include <stdio.h>

int main(){
    int i;
    for (i = 1; i < 8 * 4 + 1; i++){
        printf("$");
        if (!(i%8)) printf("\n");
    }

    return 0;
}