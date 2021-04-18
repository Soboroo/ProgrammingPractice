#include <stdio.h>

void printChars(char *str)
{
	if (*str == '\0')
		return;
	else
	{
		printChars(str + 1);
		printf("%c", *str);
	}
}

int main()
{
	printChars("Hello, IoT World!");
}