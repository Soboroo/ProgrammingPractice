#include <stdio.h>
#include <stdlib.h>

typedef struct profile
{
	int age;
	char name[105];
	int date;
} profile;

const int compare(const void *first, const void *second)
{
	profile *a = (profile *)first;
	profile *b = (profile *)second;
	if (a->age > b->age)
		return 1;
	else if (a->age < b->age)
		return -1;
	else if (a->date > b->date)
		return 1;
	else if (a->date < b->date)
		return -1;
	else
		return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	profile *list = (profile *)malloc(sizeof(profile) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &list[i].age, list[i].name);
		list[i].date = i;
	}
	qsort(list, n, sizeof(profile), compare);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", list[i].age, list[i].name);

	free(list);
	return 0;
}