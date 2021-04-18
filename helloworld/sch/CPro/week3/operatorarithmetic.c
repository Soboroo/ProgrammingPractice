#include <stdio.h>

int main(){
    int a = 1 + 1;
    int b = a * 3;
    int c = b / 4;
    int d = c - a;
    int e = -d;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);

    double da = 1 + 1;
    double db = da * 3;
    double dc = db / 4;
    double dd = dc - da;
    double de = -dd;
    printf("da = %f\n", da);
    printf("db = %f\n", db);
    printf("dc = %f\n", dc);
    printf("dd = %f\n", dd);
    printf("de = %f\n", de);

    return 0;
}