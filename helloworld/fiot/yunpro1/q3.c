#include <stdio.h>

int gcd(int a, int b){
    return a%b ? gcd(b, a%b) : b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("GCD is %d", a < b ? gcd(b, a) : gcd(a, b));
    return 0;
}