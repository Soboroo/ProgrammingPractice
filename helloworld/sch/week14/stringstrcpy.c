#include <stdio.h>
#include <string.h>

int main(){
    char *pc[3]  = {"Hello", ", ", "World!"};
    char s1[100], s2 [10];
    int i = 0;
    for (i = 0; i < 3; i++)
        printf("%d, %d\n", sizeof(pc[i]), strlen(pc[i]));

    strcpy(s1, pc[0]);
    strcpy(s1 + strlen(pc[0]), pc[1]);
    strcpy(s1 + strlen(pc[0]) + strlen(pc[1]), pc[2]);
    printf("%s\n", s1);

    strncpy(s2, s1, sizeof(s2));
    printf("%s\n", s2);

    strncpy(s2, s1, sizeof(s2) - 1);
    s2[sizeof(s2) - 1] = '\0';
    printf("%s\n", s2);

    return 0;
}