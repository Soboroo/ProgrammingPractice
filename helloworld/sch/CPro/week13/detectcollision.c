#include <stdio.h>
#define N 10
#define MAX 100.0

int main(){
    double x[N], y[N];
    double bin = MAX / N;
    double a = -0.02, b = 2, c = 0;
    int i;
    double xb[2] = {65.0, 85.0};
    double yb[2] = {30.0, 50.0};

    for (i = 0; i < N; i++)
        x[i] = bin * i;
    for (i = 0; i < N; i++)
        y[i] = a * x[i] * x[i] + b * x[i] + c;

    for (i = 0; i < N; i++){
        if((x[i] >= xb[0] && x[i] <= xb[1]) && (y[i] >= yb[0] && y[i] <= y[i] <= yb[1])) {
            printf("(%+10.2f, %+10.2f) Hit!!!\n", x[i], y[i]);
        }
        else{
            printf("(%+10.2f, %+10.2f) NOT Hit!!!\n", x[i], y[i]);
        }
    }
    return 0;
}