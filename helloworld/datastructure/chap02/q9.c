#include <stdio.h>

void ary_rcopy(int a[], const int b[], int n){
    for (int i = 0; i < n; i++){
        a[i] = b[n-i-1];
    }
}

int main(){
    int i = 0, a[BUFSIZ], b[BUFSIZ];
    do{
        scanf("%d", &b[i++]);
    }while(b[i-1] != 0);
    ary_rcopy(a, b, i-1);
    for (int j = 0; j < i-1; j++){
        printf("%d %d\n", a[j], b[j]);
    }
    return 0;
}