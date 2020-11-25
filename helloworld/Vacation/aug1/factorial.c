#include <stdio.h>

int fact(int);
int gop = 1;

int main(){
    int i;
    scanf("%d", &i);
    printf("%d", fact(i));
    return 0;
}

int fact(int n){
    if (n == 0) return 1;
    else if (n == 1) return gop;
    gop*=n;
    fact(n-1);
}