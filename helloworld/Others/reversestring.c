#include <stdio.h>

int main()
{
	char arr[] = "RLEPWEMAANTORTANEP";
	for (int i = sizeof(arr); i > -1; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}