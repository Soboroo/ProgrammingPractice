#include <stdio.h>
#define PI 3.14

float circum(float *);
float area(float *);

int main(){
    float rd = 2.3;

    printf("Circumference is %.2f.\n", circum(&rd));
    printf("Area is %.2f.\n", area(&rd));

    return 0;
}

float circum(float *r){
    return 2 * PI * *r;
}

float area(float *r){
    return PI * *r * *r;
}