#include <stdio.h>

int main()
{
	char arr[] = "TETTTTEETEEETETETEEETETTTTEETEETEEEEETETTEEETETTEETTEETETTETTEEETTETETETTEEEETTT";
	char new[sizeof(arr)] = "0";
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (arr[i] = 'T')
			new[i] = 'B';
		else if (arr[i] = 'E')
			new[i] = 'A';
	}
	new[i] = '\0';
	printf("%s", new);
	return 0;
}