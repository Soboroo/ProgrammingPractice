#include <stdio.h>

int solution(const char *s)
{
	int i = 0;
	while (*s)
	{
		if (*s == '(')
			i++;
		else if (*s == ')' && !i--)
			return 0;
		s++;
	}
	return !i;
}

main(a)
{
	char p[55];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%s", p);
		printf("%s\n", solution(p) ? "YES" : "NO");
	}
}