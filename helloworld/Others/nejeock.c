#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a[], size_t a_len, int b[], size_t b_len)
{
	int n = a[a_len - 1] * b[a_len - 1];
	return a_len == 1 ? n : n + solution(a, --a_len, b, b_len);
}

int main()
{
	int a[] = {1, 2, 3, 4}, b[] = {-3, -1, 0, 2};
	printf("%d", solution(a, 4, b, 4));
	return 0;
}