#include <stdio.h>
#include <stdbool.h>

bool solution(int x)
{
	int sum = 0, n = x;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return x % sum ? false : true;
}