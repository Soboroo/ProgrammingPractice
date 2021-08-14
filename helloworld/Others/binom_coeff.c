#include <stdio.h>

int main()
{
	int n, k, answer = 1;
	scanf("%d %d", &n, &k);
	for (int i = k; i; i--)
		answer *= n--;
	while (k)
		answer /= k--;
	printf("%d", answer);
}