#include <stdio.h>
#include <math.h>

int main(){
    int n, x, y;
    unsigned int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%u %u", &x, &y);
        sum += (unsigned int)(x * y * (int)pow(2.0, y-1.0));
    }
    printf("%llu", sum % 1000000007);
    return 0;
}