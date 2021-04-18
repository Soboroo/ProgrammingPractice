#include <stdio.h>

int main()
{
	FILE *fp;
	int c;
	fp = fopen("get_video_info", "r");

	while ((c = fgetc(fp)) != EOF)
	{
		if (c == '&')
			printf("\n");
		putchar(c);
	}
	fclose(fp);
	return 0;
}