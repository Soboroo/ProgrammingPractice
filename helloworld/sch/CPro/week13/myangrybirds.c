#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define N 10
#define MAX 100.0
#define G 9.8

double getxmax(double, double);
double getymax(double, double);
double geta(double, double);
double getb(double, double);

int main(){
    double x[N], y[N], bin = MAX / N;
    double v = 35.0015;
    double theta = 63.43 * M_PI / 180;

    double a, b, c, xm, ym; int i;

    double xb[2] = {65.0, 85.0};
    double yb[2] = {30.0, 50.0};

    xm = getxmax(v, theta);
    ym = getymax(v, theta);

    a = geta(xm, ym);
    b = getb(xm, ym);
    printf("%+.5f, %+.5f\n", xm, ym);
    printf("%+.5f, %+.5f\n", a, b);

    for (i = 0; i < N; i++) x[i] = bin * i;
    for (i = 0; i < N; i++) y[i] = a * x[i] * x[i] + b * x[i] + c;

    for (i = 0; i < N; i++){
        if ((x[i] >= xb[0] && x[i] <= xb[1]) && (y[i] >= yb[0] && y[i] <= yb[1])){
            printf("(%+10.2f, %+10.2f) Hit!!!\n", x[i], y[i]);
        }
        else {
            printf("(%+10.2f, %+10.2f) Not Hit!!!\n", x[i], y[i]);
        }
    }

    return 0;
}

double getxmax(double v, double th){
    return v * v * sin(2*th) / G;
}

double getymax(double v, double th){
    return v * v * sin(th) * sin(th) / (2*G);
}

double geta(double x, double y){
    return -4*y/(x*x);
}

double getb(double x, double y){
    return 4*y/x;
}