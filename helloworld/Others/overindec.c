#include <stdio.h>

int main()
{
	int array[10] = {
			0,
	};
	printf("%x", &array[0]);
	printf("%x", array);
	return 0;
}