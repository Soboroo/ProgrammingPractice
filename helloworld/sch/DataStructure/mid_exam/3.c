#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	char name[20];
	int id;
	double grade;
	struct Student *link;
} Student;

Student *head = NULL;

Student *makeNode(const char *name, int id, double grade)
{
	Student *p = (Student *)malloc(sizeof(Student));
	strcpy(p->name, name);
	p->id = id;
	p->grade = grade;
	p->link = NULL;

	return p;
}

int main()
{
	head = makeNode("Daehee Kim", 20170031, 3.39);
	head->link = makeNode("Taewon Song", 20180054, 4.15);
	head->link->link = makeNode("Dongmin Kim", 20190039, 3.94);
	head->link->link->link = makeNode("Jaeseok Yun", 20160065, 4.2);
	head->link->link->link->link = makeNode("Changwan Jeon", 20200034, 4.30);

	printf("%s, %d, %.2f\n", head->name, head->id, head->grade);
	printf("%s, %d, %.2f\n", head->link->name, head->link->id, head->link->grade);
	printf("%s, %d, %.2f\n", head->link->link->name, head->link->link->id, head->link->link->grade);
	printf("%s, %d, %.2f\n", head->link->link->link->name, head->link->link->link->id, head->link->link->link->grade);
	printf("%s, %d, %.2f\n", head->link->link->link->link->name, head->link->link->link->link->id, head->link->link->link->link->grade);

	return 0;
}