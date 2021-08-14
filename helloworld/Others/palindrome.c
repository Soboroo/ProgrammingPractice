#include <stdio.h>
#include <string.h>

int main()
{
	char str[6];
	int a, len, answer = 1;
	while (1)
	{
		answer = 1;
		scanf("%d", &a);
		if (!a)
			return 0;
		sprintf(str, "%d", a);
		len = strlen(str);
		for (int i = 0; len / 2 >= i; i++)
		{
			if (str[i] != str[len - i - 1])
			{
				answer = 0;
				break;
			}
		}
		printf("%s\n", answer ? "yes" : "no");
	}
}