#include <stdio.h>

void ary_copy(int a[], const int b[], int n){
    for (int i = 0; i < n; i++){
        a[i] = b[i];
    }
}

int main(){
    int i = 0, a[BUFSIZ], b[BUFSIZ];
    do{
        scanf("%d", &b[i++]);
    }while(b[i-1] != 0);
    ary_copy(a, b, i);
    for (int j = 0; j < i-1; j++){
        printf("%d %d\n", a[j], b[j]);
    }
    return 0;
}