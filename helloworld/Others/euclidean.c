#include <stdio.h>

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}

int solution(int arr[], size_t arr_len)
{
	int answer = 1, a;
	for (int i = 0; i < arr_len - 2; i++)
		a = gcd(gcd(arr[i], arr[i + 1]), arr[i + 2]);
	for (int i = 0; i < arr_len; i++)
		answer *= arr[i] / a;
	return answer * a;
}

int main()
{
	int a[] = {2, 6, 8, 14};
	printf("%d", solution(a, sizeof(a) / sizeof(int)));
	return 0;
}