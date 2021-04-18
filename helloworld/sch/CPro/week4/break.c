#include <stdio.h>

int main(){
    int i = 0;
    int triangle = 0;

    while (1) {
        triangle += i;

        if (triangle > 50)
            break;

        i++;
    }

    printf("Triangle number of %d is %d.", i, triangle);
    return 0;
}