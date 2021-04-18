#include <stdio.h>

struct point{
    int point;
};

struct points{
    int point;
    int x;
};

int main(){
    struct point x;
    struct points y;
    int point;

    point = 0;
    x.point = 1;
    y.point = 2;
    y.x = 3;

    printf("Ordinary variable \'point\' is %d\n", point);
    printf("Member \'point\' of structure x is %d\n", x.point);
    printf("Member \'point\' of structure y is %d\n", y.point);
    printf("Member \'x\' of structure y is %d\n", y.x);
    return 0;
}
