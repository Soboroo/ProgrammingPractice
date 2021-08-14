#include <stdio.h>
#include <stdlib.h>

typedef struct term
{
	int row;
	int col;
	int val;
	struct term *link;
} Term;

Term *head = NULL;

Term *makeNode(int row, int col, int val)
{
	Term *p = (Term *)malloc(sizeof(Term));
	p->row = row;
	p->col = col;
	p->val = val;
	p->link = NULL;

	return p;
}

int main()
{
	int A[5][5] = {
			{0, 0, 1, 0, 0},
			{2, 0, 0, 0, 0},
			{0, 0, 0, 3, 0},
			{0, 4, 0, 0, 0},
			{0, 0, 0, 0, 5}};

	head = (Term *)malloc(sizeof(Term));
	head = makeNode(5, 5, 5);
	Term *p = head;
	Term *new = NULL;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (A[i][j])
			{
				new = makeNode(i, j, A[i][j]);
				p->link = new;
				p = p->link;
			}
		}
	}

	printf("%d %d %d\n", head->row, head->col, head->val);
	printf("%d %d %d\n", head->link->row, head->link->col, head->link->val);
	printf("%d %d %d\n", head->link->link->row, head->link->link->col, head->link->link->val);
	printf("%d %d %d\n", head->link->link->link->row, head->link->link->link->col, head->link->link->link->val);
	printf("%d %d %d\n", head->link->link->link->link->row, head->link->link->link->link->col, head->link->link->link->link->val);
	printf("%d %d %d\n", head->link->link->link->link->link->row, head->link->link->link->link->link->col, head->link->link->link->link->link->val);

	return 0;
}