#include <stdio.h>

int main(){
    int i;
    char string[50];
    scanf("%s", string);
    for (i = 0; string[i]; i++);
    printf("%d", i);
    return 0;
}