#include <stdio.h>

int main(){
    int i = 0;

    while (i < 2)
        printf("i is %d.\n", i++);

    while (i > 0)
        printf("i is %d.\n", --i);
        
    return 0;
}