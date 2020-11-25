#include <stdio.h>

float mean(float, float);
float var(float, float);

int main(){
    int q = 9, r = 3;
    printf("Mean is %f and var is %f.\n", mean(q, r), var(q, r));

    return 0;
}

float mean(float a, float b){
    return (a + b) / 2;
}

float var(float x, float y){
    float m = mean(x, y);
    return ((x-m)*(x-m)+(y-m)*(y-m))/2;
}