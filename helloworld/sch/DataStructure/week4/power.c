#include <stdio.h>

int power(int x, int n)
{
	return n ? x * power(x, n - 1) : 1;
}

int main()
{
	printf("%d\n", power(2, 10));
	return 0;
}