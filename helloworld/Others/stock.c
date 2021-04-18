#include <stdio.h>
#include <stdlib.h>

int *solution(int prices[], size_t prices_len)
{
	int *answer = (int *)malloc(sizeof(int) * prices_len);
	for (int i = 0; i < prices_len; i++)
	{
		for (int j = i; j < prices_len; j++)
		{
			if (prices[i] > prices[j] || prices_len - j == 1)
			{
				answer[i] = j - i;
				break;
			}
		}
	}
	return answer;
}

int main()
{
	int a[] = {1, 2, 3, 2, 3};
	int *dap = solution(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d, ", dap[i]);
	}
}