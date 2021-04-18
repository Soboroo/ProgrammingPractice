#include <stdio.h>

int sum(int x)
{
	return x ? x + sum(x - 1) : 0;
}

int main()
{
	printf("%d\n", sum(1000));
}