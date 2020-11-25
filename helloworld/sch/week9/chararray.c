#include <stdio.h>

int main(){
    char arChar[3] = {'a', 'b', 'c'};
    int i;

    for (i = 0; i < 3; i++)
        printf("%c", arChar[i]);

    return 0;
}