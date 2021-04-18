#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
} cord;

int static compare(const void *first, const void *second)
{
	cord *a = (cord *)first, *b = (cord *)second;
	if (a->y > b->y)
		return 1;
	else if (a->y < b->y)
		return -1;
	else if (a->x > b->x)
		return 1;
	else if (a->x < b->x)
		return -1;
	else
		return 0;
}

int main()
{
	int a;
	scanf("%d", &a);
	cord *list = (cord *)calloc(a, sizeof(cord));
	for (int i = 0; i < a; i++)
		scanf("%d %d", &(list[i].x), &(list[i].y));
	qsort(list, a, sizeof(cord), compare);

	for (int i = 0; i < a; i++)
		printf("%d %d\n", list[i].x, list[i].y);

	return 0;
}