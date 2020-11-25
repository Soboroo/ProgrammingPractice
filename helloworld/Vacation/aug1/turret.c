#include <stdio.h>
#include <math.h>

int main(){
    int i, j, t;
    double s, x1, y1, r1, x2, y2, r2;
    scanf("%d", &t);
    int ans[t+1];
    for (i = 0; i < t; i++){
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
        s = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
        if (x1 == x2 && y1 == y2 && r1 == r2) ans[i] = -1;
        else if (s < fabs(r2-r1) || s > r2+r1) ans[i] = 0;
        else if (s == fabs(r2-r1) || s == r2+r1) ans[i] = 1;
        else ans[i] = 2;
    }
    for (i = 0; i < t; i++) printf("%d\n", ans[i]);
    return 0;
}