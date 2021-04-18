//자료구조 교제 p98 4번 문제

#include <stdio.h>
#include <stdlib.h>

int power(int n)
{
	return n ? 2 * power(n - 1) : 1;
}

int main()
{
	int *two = (int *)malloc(10 * sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		two[i] = power(i);
		printf("two[%d]: %d\n", i, two[i]);
	}
	free(two);
}