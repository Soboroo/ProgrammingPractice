#include <stdio.h>

void printEvenReverse(int n)
{
	printf("%d ", n);
	return n == 2 ?: printEvenReverse(n - 2);
}

int main()
{
	printEvenReverse(20);
}