#include <stdio.h>

int main(){
    int a, b, c, d, e, f;
    a = ((9/3) == 3) && (2*3 == 6);
    b = ('A' == 'a') && (3==3);
    c = 2==3 || 'A'=='A';
    d = 2.99 >= 3 || 0;
    e = !(3 == 3);
    f = !(2.99 >= 7%4);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);

    return 0;
}