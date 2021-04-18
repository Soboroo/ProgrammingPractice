#include <stdio.h>

void strcpyArr(char src[], char dis[])
{
	for (int i = 0; dis[i] = src[i]; i++)
		;
}

void strcpyPtr(char *src, char *dis)
{
	for (int i = 0; *(dis + i) = *(src + i); i++)
		;
}

int main()
{
	char *src = "Welcome to IoT World!";
	char dst1[30], dst2[30];

	strcpyArr(src, dst1);
	strcpyPtr(src, dst2);

	printf("Src(%s) Dst1(%s) Dst2(%s)\n", src, dst1, dst2);
}