#include <stdio.h>
#include <string.h>

int main(){
    int a, i, j;
    scanf("%d", &a);
    char str[a+1][51];
    for (i = 0; i < a; i++) scanf("%s", &str[i]);
    SelectionSort(str, a);
}

