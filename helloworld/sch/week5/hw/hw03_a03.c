#include <stdio.h>

void getmax();
void getmin();
float a, b, c, max, min;

int main(){
    a = 3.5, b = -4.5, c = 2.3e-1, max = min = 0;
    getmax(); getmin();
    printf("Max number is %f.\n", max);
    printf("Min number is %f.\n", min);

    return 0;
}

void getmax(){
    if (a >= b && a >= c) max = a;
    else if (b >= a && b >= c) max = b;
    else if (c >= a && c >= b) max = c;
}

void getmin(){
    if (a <= b && a <= c) min = a;
    else if (b <= a && b <= c) min = b;
    else if (c <= a && c <= b) min = c;
}