#include <stdio.h>

int sumAlgorithmA(int n)
{
	return n * (n + 1) / 2;
}

int sumAlgorithmB(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int sumAlgorithmC(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			sum++;
	}
	return sum;
}

int main()
{
	printf("A: %d, B: %d, C: %d\n", sumAlgorithmA(100), sumAlgorithmB(100), sumAlgorithmC(100));
	return 0;
}
