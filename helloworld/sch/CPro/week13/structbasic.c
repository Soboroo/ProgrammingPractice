#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(){
    struct point a = {0, 1};
    printf("a.x = %d, a.y = %d\n", a.x, a.y);

    a.x = 10;
    a.y = 20;
    printf("a.x = %d, a.y = %d\n", a.x, a.y);

    double dist = sqrt((double)a.x * a.x + (double)a.y * a.y);
    printf("Distance is %.2f", dist);

    return 0;
}
