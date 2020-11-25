#include <stdio.h>

int sumof(int a, int b){
    int num1, num2,sum = 0;
    if (a == b) return a;
    if (a < b) num1 = a, num2 = b;
    else num1 = b, num2 = a;
    for (int i = num1; i <= num2; i++) sum+=i;
    return sum;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sumof(a, b));
    return 0;
}