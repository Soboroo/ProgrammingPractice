#include <stdio.h>

int fact(int x)
{
	printf("%d\n", x);
	return x ? x * fact(x - 1) : 1;
}

int babofact(int x)
{
	printf("%d\n", x);
	return x * babofact(x - 1);
}

int main()
{
	printf("%d", fact(5));
	return 0;
}