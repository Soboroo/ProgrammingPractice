#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct
{
	element data;
	struct ListNode *link;
} ListNode;

int main()
{
	ListNode *head = NULL;
	ListNode *p;

	head = (ListNode *)malloc(sizeof(ListNode));
	head->data = 10;
	head->link = NULL;

	p = (ListNode *)malloc(sizeof(ListNode));
	p->data = 20;
	p->link = NULL;

	head->link = p;

	p = (ListNode *)malloc(sizeof(ListNode));
	p->data = 30;
	p->link = NULL;
}