#include <stdio.h>

int main(void)
{
    int i = 100;
    char grade = 'A';

    printf("i=%-5d\n", i);
    printf("i=%5d\n", i);
    printf("i=%+5d\n", i);
    printf("i=%-+5d\n\n", i);

    printf("grade=%c.\n", grade);
    printf("grade=%3c.\n", grade);

    printf("%11s\n", "Welcome!");

    return 0;
    
}