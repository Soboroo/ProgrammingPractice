#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float circum(float);
float area(float);

int main(){
    float rd = 2.3;
    printf("Circumference is %f.\n", circum(rd));
    printf("Area is %f.\n", area(rd));

    return 0;
}

float circum(float r){
    return 2 * M_PI * r;
}

float area(float r){
    return M_PI * r * r;
}