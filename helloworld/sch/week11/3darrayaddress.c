#include <stdio.h>

int main(){
    char a[3][2][3];

    printf("%p\n", &a);
    printf("%p %p %p %p\n", a, &a[0], &a[1], &a[2]);

    printf("%p %p %p\n", a[0], &a[0][0], &a[0][1]);
    printf("%p %p %p\n", a[1], &a[1][0], &a[1][1]);
    printf("%p %p %p\n", a[2], &a[2][0], &a[2][1]);

    printf("%p %p %p %p\n", a[0][0], &a[0][0][0], &a[0][0][1], &a[0][0][2]);
    printf("%p %p %p %p\n", a[0][1], &a[0][1][0], &a[0][1][1], &a[0][1][2]);
    printf("%p %p %p %p\n", a[1][0], &a[1][0][0], &a[1][0][1], &a[1][0][2]);
    printf("%p %p %p %p\n", a[1][1], &a[1][1][0], &a[1][1][1], &a[1][1][2]);
    printf("%p %p %p %p\n", a[2][0], &a[2][0][0], &a[2][0][1], &a[2][0][2]);
    printf("%p %p %p %p\n", a[2][1], &a[2][1][0], &a[2][1][1], &a[2][1][2]);

    return 0;
}