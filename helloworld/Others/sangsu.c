#include <stdio.h>

int sangsu (int n)
{
    int dap = 100 * (n % 10) + n / 10 % 10 * 10 + n / 100;
    return dap;
}
int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);
    ans = sangsu(a) > sangsu(b) ? sangsu(a) : sangsu(b);
    printf("%d", ans);
    return 0;
}