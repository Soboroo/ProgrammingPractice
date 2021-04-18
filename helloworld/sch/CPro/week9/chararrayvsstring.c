#include <stdio.h>

int main(){
    char cArray[] = {'a', 'b', 'c'};
    char str[] = "abc";

    printf("%d\n", sizeof(cArray));
    printf("%d\n", sizeof(str));

    return 0;
}