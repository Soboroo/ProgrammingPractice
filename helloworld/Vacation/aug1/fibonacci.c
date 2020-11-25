#include <stdio.h>

int fibo(int, int);
int ans[21] = {0, 1, };
int main(){
    int t;
    scanf("%d", &t);
    printf("%d", fibo(2, t));
}
int fibo(int n, int k){
    if (k == 0 || k == 1) return k == 0 ? ans[0] : ans[1];
    ans[n] = ans[n-1] + ans[n-2];
    if (n == k) return ans[n];
    fibo(n+1, k);
}