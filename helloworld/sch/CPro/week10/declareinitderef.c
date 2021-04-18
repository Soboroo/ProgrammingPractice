#include <stdio.h>

int main(){
    int i = 1999;
    int *pi = &i;
    int x = *pi;

    char c = 'H';
    char *pc = &c;

    printf("%d %d %d\n", i, *pi, x);
    printf("%c %c\n", c, *pc);

    return 0;
}