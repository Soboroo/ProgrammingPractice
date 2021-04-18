#include <stdio.h>

int main(){
    char *str[3] = {"Things", "Labs", "Media"};
    char *p = str[0], **pp = &str[0];

    printf("p+0: %p\n", p); p++;
    printf("p+1: %p\n", p); p++;
    printf("p+2: %p\n", p);
    printf("%s\n", p);

    printf("pp+0: %p\n", pp); pp++;
    printf("pp+1: %p\n", pp); pp++;
    printf("pp+2: %p\n", pp);
    printf("%s\n", *pp);

    printf("%c\n", **pp);
    printf("%c\n", **(pp - 1));
    printf("%c\n", *(*pp + 3));
    printf("%c\n", *(*(pp - 1) + 1));
    return 0;
}