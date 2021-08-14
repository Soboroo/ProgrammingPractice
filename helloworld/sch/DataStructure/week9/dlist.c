#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
	int bomb;
	struct node *llink;
	struct node *rlink;
} Node;

Node *DL = NULL;

void print_list()
{
	Node *p;

	p = DL;
	printf("( ");
	while (p != NULL)
	{
		printf("%d ", p->bomb);
		p = p->rlink;
	}
	printf(")\n\n");
}

int main()
{
	Node *p, *new;
	srand(time(NULL));

	new = (Node *)malloc(sizeof(Node));
	new->bomb = rand() % 2;
	new->llink = NULL;
	new->rlink = NULL;
	DL = new;

	new = (Node *)malloc(sizeof(Node));
	new->bomb = rand() % 2;
	new->llink = NULL;
	new->rlink = NULL;
	p = DL;
}