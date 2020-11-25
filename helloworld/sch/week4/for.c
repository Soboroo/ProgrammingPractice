#include <stdio.h>

int main(){
    int i;
    int triangle = 0;
    int factorial = 1;

    for (i = 1; i <= 3; i++)
        triangle += i;

    for (i = 1; i <= 3; i++)
        factorial *= i;

    printf("Triangle number of 3 is %d.\n", triangle);
    printf("Factorial of 3 is %d.\n", factorial);

    return 0;
}