#include <stdio.h>

int recursive(int n)
{
	printf("%d\n", n);
	if (n < 1)
		return 2;
	else
		return 2 * recursive(n - 1) + 1;
}

int main()
{
	printf("%d\n", recursive(5));
	printf("%d\n", recursive(4));
	return 0;
}