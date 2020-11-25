#include <stdio.h>

int main(){
    int i, j;
    for (i = 2; i < 9; i++){
        if (i % 2 != 0) continue;
        j = 1;
        while(1){
            if (j > i) break;
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        }
    }
    return 0;
}