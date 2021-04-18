#include <stdio.h>

int main(){
    char *pc[3] = {"Hello", ", ", "World!"};
    char *p;
    
    for (int i = 0; i < 3; i++)
        printf(pc[i]);
    printf("\n");

    p = pc[1];
    pc[1] = pc[2];
    pc[2] = p;

    for (int i = 0; i < 3; i++)
        printf(pc[i]);

    return 0;
}