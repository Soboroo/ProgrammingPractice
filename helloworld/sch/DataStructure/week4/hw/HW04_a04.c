#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	int id;
	double grade;
} Student;

void strcpyPtr(char *src, char *dst)
{
	for (; *dst++ = *src++;)
		;
}

void getStudent(Student *a, char *name, int id, double grade)
{
	strcpyPtr(name, a->name);
	a->id = id;
	a->grade = grade;
}

int main()
{
	Student *A, *B;

	A = (Student *)malloc(sizeof(Student));
	B = (Student *)calloc(1, sizeof(Student));

	getStudent(A, "Kim", 20200123, 4.3);
	getStudent(B, "Lee", 20200789, 3.8);

	printf("Student A: %s, %d, %lf\n", A->name, A->id, A->grade);
	printf("Student B: %s, %d, %lf\n", B->name, B->id, B->grade);

	free(A);
	free(B);

	return 0;
}