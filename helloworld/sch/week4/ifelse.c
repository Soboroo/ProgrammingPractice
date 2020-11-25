#include <stdio.h>

int main(){
    int x = 1;
    float y = 0;

    if (x % 2 == 1)
        printf("x, y are %d, %f.\n", x, y);

    if (x % 2 == 0)
        y +=x / 2;
    else
        y += (x + 1) / 2;

    printf("x, y are %d, %f.\n", x, y);

    return 0;

}