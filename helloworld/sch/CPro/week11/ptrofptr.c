#include <stdio.h>

int main(){
    char *pc[3] = {"Hello", ", ", "World!"};

    for (int i = 0; i < 3; i++)
        printf(pc[i]);
    printf("\n");

    char **pp;
    pp = pc;

    for (int i = 0; i < 3; i++)
        printf(*(pp+i));
    printf("\n");

    printf("%c", **pp);

    return 0;
}