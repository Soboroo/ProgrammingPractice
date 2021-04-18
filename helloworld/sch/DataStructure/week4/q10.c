#include <stdio.h>

int recursive(int n)
{
	if (n != 1)
		printf("%d\n", recursive(n - 1));
	//printf("%d\n", n);
}

int main()
{
	recursive(5);
}