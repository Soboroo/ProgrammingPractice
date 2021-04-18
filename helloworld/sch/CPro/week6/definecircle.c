#include <stdio.h>
#define PI 3.14

void circle(float);
float cc, ar;

int main(){
    float rd = 2.3;
    circle(rd);

    printf("Circumference is %f.\n", cc);
    printf("Area is %f.\n", ar);
    return 0;
}

void circle(float r){
    cc = 2 * PI * r;
    ar = PI * r * r;
}