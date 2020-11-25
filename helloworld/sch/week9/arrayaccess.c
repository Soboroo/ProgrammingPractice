#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[] = {1, 2, 3, 4, 5};
    int crr[5] = {1, 2};
    int drr[5];

    drr[0] = 1; drr[1] = 2; drr[2] = 3; drr[3] = 4; drr[4] = 5;

    printf("%d%d%d%d%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    printf("%d%d%d%d%d\n", brr[0], brr[1], brr[2], brr[3], brr[4]);
    printf("%d%d%d%d%d\n", crr[0], crr[1], crr[2], crr[3], crr[4]);
    printf("%d%d%d%d%d\n", drr[0], drr[1], drr[2], drr[3], drr[4]);

    return 0;
}