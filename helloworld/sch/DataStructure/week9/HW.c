#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

typedef char element[100];
typedef struct DListNode
{
	element data;
	struct DListNode *llink;
	struct DListNode *rlink;
} DListNode;

DListNode *current;

DListNode *dinsert(DListNode *head, DListNode *pre, element value)
{
	DListNode *new_node = (DListNode *)malloc(sizeof(DListNode));
	strcpy(new_node->data, value);

	if (head == NULL)
	{
		head = new_node;
		new_node->rlink = NULL;
		new_node->llink = NULL;
	}
	else if (pre == NULL)
	{
		new_node->rlink = head;
		head = new_node;
		new_node->llink = NULL;
		new_node->rlink->llink = new_node;
	}
	else
	{
		new_node->rlink = pre->rlink;
		pre->rlink = new_node;
		new_node->llink = pre;
		if (new_node->rlink != NULL)
			new_node->rlink->llink = new_node;
	}
	return head;
}

DListNode *ddelete(DListNode *head, DListNode *removed)
{
	if (head == NULL)
	{
		printf("ddlete() error\n");
	}
	else if (head == removed)
	{
		head = removed->rlink;
		if (removed->rlink != NULL)
			removed->rlink->llink = NULL;
		free(removed);
	}
	else
	{
		removed->llink->rlink = removed->rlink;
		if (removed->rlink != NULL)
			removed->rlink->llink = removed->llink;
		free(removed);
	}
	return head;
}

void print_dlist(DListNode *head)
{
	DListNode *p;

	for (p = head; p != NULL; p = p->rlink)
	{
		if (p == current)
			printf("<-| #%s# |->", p->data);
		else
			printf("<-| %s |->", p->data);
	}
	printf("\n");
}

int main()
{
	DListNode *head = NULL;
	char filename[100];
	char ch;

	head = dinsert(head, NULL, "The Next Right Thing");
	head = dinsert(head, NULL, "Show Yourself");
	head = dinsert(head, NULL, "Into The Unknown");
	head = dinsert(head, NULL, "All Is Found");

	current = head;
	print_dlist(head);
	strcpy(filename, current->data);
	strcat(filename, ".wav");
	PlaySoundA(filename, NULL, SND_FILENAME | SND_ASYNC);

	do
	{
		printf("\n명령어를 입력하시오(<, >, q): ");
		ch = getch();
		printf("\n\n\n");
		if (ch == '<' || ch == ',')
		{
			if (current->llink != NULL)
			{
				system("cls");
				current = current->llink;
				print_dlist(head);
				strcpy(filename, current->data);
				strcat(filename, ".wav");
				PlaySoundA(NULL, NULL, (DWORD)0);
				PlaySoundA(filename, NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				printf("첫 번쨰 노래입니다.\n");
			}
		}
		else if (ch == '>' || ch == '.')
		{
			if (current->rlink != NULL)
			{
				system("cls");
				current = current->rlink;
				print_dlist(head);
				strcpy(filename, current->data);
				strcat(filename, ".wav");
				PlaySoundA(NULL, NULL, (DWORD)0);
				PlaySoundA(filename, NULL, SND_FILENAME | SND_ASYNC);
			}
			else
			{
				printf("마지막 노래입니다.\n");
			}
		}
	} while (ch != 'q');
}