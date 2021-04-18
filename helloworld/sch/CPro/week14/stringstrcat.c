#include <stdio.h>
#include <string.h>

int main(){
    char *pc[3] = {"Hello", ", ", "World!"};
    char s1[100], s2[10];

    strcpy(s1, pc[0]);
    strcat(s1, pc[1]);
    strcat(s1, pc[2]);
    printf("%s\n", s1);

    strcpy(s2, pc[0]);
    strcat(s2, pc[1]);
    strncat(s2, pc[2], 3);
    printf("%s\n", s2);

    strcpy(s2, pc[0]);
    strcat(s2, pc[1]);
    strncat(s2, pc[2], 2);
    printf("%s\n", s2);

    return 0;
}