#include <stdio.h>

int main(){
    int x = 1, y = 2;

    int temp = x + y;
    printf("Outside: \n");
    printf("x + y is %d.\n", temp);

    {
        int temp = x * y;
        printf("Inside: \n");
        printf("x * y is %d.\n", temp);
    }

    return 0;
}