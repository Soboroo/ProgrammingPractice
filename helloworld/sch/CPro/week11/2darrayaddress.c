#include <stdio.h>
#define M 2
#define N 3

int main(){
    char arr[M][N];

    printf("%p %p %p\n", arr, &arr[0], &arr[1]);
    printf("%p %p %p %p\n", arr[0], &arr[0][0], &arr[0][1], &arr[0][2]);
    printf("%p %p %p %p\n", arr[1], &arr[1][0], &arr[1][1], &arr[1][2]);
    
    return 0;
}