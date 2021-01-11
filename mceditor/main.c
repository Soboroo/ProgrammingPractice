#include <stdio.h>
#include <conio.h>
#include <windows.h>

void menu();
void make();
void apply();

int main()
{
	int a;
	menu();
	scanf("%d", &a);
	if (a == 1)
	{
		make();
	}
	else if (a == 2)
	{
		apply();
	}
}

void menu()
{
	puts("---------앙기모띠----------");
	puts("1. 파일 생성");
	puts("2. 적용");
	puts("--------------------------");
}

void make()
{
	char name[50];
	char url[BUFSIZ];
	int i = 1;
	printf("저장할 파일명(20자 이하): ");
	scanf("%s", name);
	strcat(name, ".txt");
	FILE *fp = fopen(name, "w+");
	printf("forge download URL: ");
	scanf("%s", url);
	fputs(url, fp);
	fputc('\n', fp);
	do
	{
		printf("mod %d: ", i++);
		scanf("%s", url);
		fputs(url, fp);
		fputc('\n', fp);
	} while (url != "0");

	fclose(fp);
}

void apply()
{
}