#include <stdio.h>

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr, *ptr2 = &arr[5];
    int temp;

    while(ptr1 < ptr2){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++, ptr2--;
    }

    for (int i = 0; i < 6; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    return 0;
}