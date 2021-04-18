#include <stdio.h>

int main(){
    int x = 3, y = 2, z = 5;
    float fa = 2.3, fb = 4.5;
    char ca = 'D', cb = 'E';

    float fres = (x * y / z) / fa;
    int ires = x / 2.3;

    printf("x + y - z produces %d\n", x + y - z);
    printf("(x * y / z) / fa produces %f\n", fres);
    printf("x / 2.3 produces %d\n", ires);
    printf("fa / x >= fb / 2 evaluates to %d\n", fa / x >= fb / 2);
    printf("ca < cb evaluates to %d\n", ca < cb);
    printf("fa * 3 != z / 2.4 evaluates to %d\n", fa * 3 != z / 2.4);
    printf("(fa * z >= 3.5) && (fb * x <= 1.7) evaluates to %d\n", (fa * z >= 3.5) && (fb * x <= 1.7));
    printf("!(fb * 3 < 5) evaluates to %d\n", !(fb * 3 < 5));
    printf("y++ == 3 evaluates to %d\n", y++ == 3);
    printf("++x == --z evaluates to %d\n", ++x == --z);

    return 0;
}