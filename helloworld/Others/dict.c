#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static compare(const void *first, const void *second)
{
	char *a = (char *)first, *b = (char *)second;
	int sa = strlen(a), sb = strlen(b);
	if (sa > sb)
		return 1;
	else if (sa < sb)
		return -1;
	else
	{
		int i;
		for (i = 0; a[i] == b[i]; i++)
			;
		if (i == sa)
			return 0;
		else
		{
			if (a[i] > b[i])
				return 1;
			else if (a[i] < b[i])
				return -1;
			else
				return 0;
		}
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	char list[a][5];
	char temp[5];
	for (int i = 0; i < a; i++)
		scanf("%s", list[i]);
	qsort(list, a, 5, compare);
	for (int i = 0; i < a; i++)
	{
		if (!strcmp(list[i], temp))
			continue;
		else
			strcpy(temp, list[i]);
		printf("%s\n", list[i]);
	}
}