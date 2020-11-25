#include <stdio.h>
#include <math.h>
#define N 10

int main(){
    int i; double avg, std, sum = 0, prestd = 0;
    double point[N] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    for (i = 0; i < N; i++)
        sum += point[i];
    avg = sum / N;

    for (i = 0; i < N; i++)
        prestd += pow(point[i] - avg, 2);
    std = sqrt(prestd/N);

    printf("Avg is %.2f.\n", avg);
    printf("Std is %.2f.", std);

    return 0;
}