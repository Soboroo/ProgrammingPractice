#include <stdio.h>

int main(){
    int array[5], max, min, sum = 0;
    
    for (int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    max = min = array[0];

    for (int i = 0; i < 5; i++){
        if (max < array[i]) max = array[i];
        if (min > array[i]) min = array[i];
        sum += array[i];
    }

    printf("max: %d\n", max);
    printf("min: %d\n", min);
    printf("sum: %d\n", sum);

    return 0;
}