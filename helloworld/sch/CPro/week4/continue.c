#include <stdio.h>

int main(){
    int i, j = 3, k = 1;

    printf("continue of \'for\'\n");

    for (i = 1; i < 5; i++){
        if(i%2 == 0)
            continue;
        printf("%d\n", i);
    }

    printf("continue of \'while\'\n");

    while (j > 0){
        if (j == 2){
            j--;
            continue;
        }
        printf("%d\n", j);
        j--;
    }

    printf("continue of \'do-while\'\n");

    do{
        if(k > 2){
            k++;
            continue;
        }
        printf("%d\n", k);
        k++;
    } while (k < 4);

    return 0;
}