#include <stdio.h>

double solution(int arr[], size_t arr_len)
{
	int i, sum;
	for (i = 0, sum = 0; i < arr_len; sum += arr[i++])
		;
	return (double)sum / arr_len;
}

int main()
{
	int a[] = {1, 2, 3, 4};
	printf("%f", solution(a, 4));
	return 0;
}