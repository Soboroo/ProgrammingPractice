#include <stdio.h>
#include <math.h>

int main(){
    int i = 2;
    float f;

    f = i + 3.14159;
    printf("%f\n", f);
    

    f = (float)i + 3.14159;
    printf("%f\n", f);
    
    f = sqrt((double)i);
    printf("%f\n", f);
    
    return 0;
}