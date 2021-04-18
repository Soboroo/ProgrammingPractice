#include <stdio.h>

int SequentialSearch(int a[], int n, int key)
{
	for (int index = 0; index < n; index++)
		if (a[index] == key)
			return index;

	return -1;
}

int main()
{
	int a[] = {1, 10, 34, 2, 7, 95, 100, 745, 3, 56};
	printf("Best: %d, Avg: %d, Worst: %d, NA: %d\n",
				 SequentialSearch(a, 10, 1),
				 SequentialSearch(a, 10, 95),
				 SequentialSearch(a, 10, 56),
				 SequentialSearch(a, 10, 1004));
	return 0;
}