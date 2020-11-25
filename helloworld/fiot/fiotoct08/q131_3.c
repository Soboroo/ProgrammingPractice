#include <stdio.h>

int main(){
    int sum = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];

    for (int i = 0; i < 5; i++, sum+=*(ptr--));
    printf("sum: %d", sum);

    return 0;
}