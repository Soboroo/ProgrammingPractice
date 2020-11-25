#include <stdio.h>

int main(){
    int i, a[4], b[4], x, y;
    for (i = 0; i < 3; i++) scanf("%d %d", &a[i], &b[i]);
    x = a[0] != a[1] && a[1] == a[2] ? a[0] : a[0] == a[1] ? a[2] : a[1];
    y = b[0] != b[1] && b[1] == b[2] ? b[0] : b[0] == b[1] ? b[2] : b[1];
    printf("%d %d", x, y);
    return 0;
}