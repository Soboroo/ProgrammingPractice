//head 포인터 노드화 하려다가... 망함
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct name_card
{
	char name[20];
	int id;
	struct name_card *link;
} Namecard;

Namecard tmp = {NULL, NULL, NULL};
Namecard *head = &tmp;
//head를 Namecard화, index를 -1 부터 시작...? preNode = -1 *p = getNode(-1), for (p = head->link; pos != -1; p = p->link )

Namecard *getNode(int pos)
{
	Namecard *p;
	for (p = head->link; pos != -1; p = p->link, pos--)
	{
		if (!(p->link))
			return NULL;
	}
	return p;
}

Namecard *make_Namecard(const char name[], int id)
{
	Namecard *newCard = (Namecard *)malloc(sizeof(Namecard));

	strcpy(newCard->name, name);
	newCard->id = id;
	newCard->link = NULL;

	return newCard;
}

int is_empty(void)
{
	return head->link == NULL ? 1 : 0;
}

void init()
{
	Namecard *p, *removed;

	if (!is_empty())
	{
		for (p = head->link; p != NULL;)
		{
			removed = p;
			p = p->link;
			free(removed);
		}
	}

	head = make_Namecard("학생 리스트", -1);
}

int size(void)
{
	Namecard *p;
	int length = 0;
	for (p = head->link; p; p = p->link, length++)
		;
	return length;
}

void insert(int pos, Namecard *item)
{
	Namecard *p = getNode(pos - 1);
	if (is_empty())
	{
		head->link = item;
		return;
	}
	else
	{
		if (p) //pre 노드 존재
		{
			item->link = p->link;
			p->link = item;
		}
		else
		{
			printf("삽입 위치 오류\n");
			return;
		}
	}
}

void delete (int pos)
{
	Namecard *del;
	if (is_empty())
	{
		printf("공백 리스트 오류\n");
		return;
	}
	Namecard *p = getNode(pos - 1);
	if (p && p->link) //pre 노드 및 삭제 대상 존재
	{
		del = p->link;
		p->link = del->link;
		free(del);
	}
	else
	{
		printf("삭제 위치 오류\n");
		return;
	}
}

void replace(int pos, Namecard *item)
{
	Namecard *p = getNode(pos);
	if (!p)
	{
		printf("교체 위치 오류\n");
		return;
	}
	strcpy(p->name, item->name);
	p->id = item->id;
}

int find(Namecard *item)
{
	Namecard *p;
	int result;
	for (p = head->link, result = 0; strcmp(item->name, p->name) || (item->id != p->id); p = p->link, result++)
	{
		if (!(p->link))
			return -1;
	}
	return result;
}

Namecard get_entry(int pos)
{
	Namecard *p = getNode(pos);
	return *p;
}

void print_list(const char *msg)
{
	printf("%s: ", msg);
	for (Namecard *p = head->link; p; p = p->link)
		printf("(%s, %d) ", p->name, p->id);

	printf("\n\n");
}

int main()
{
	init();
	print_list("Init");
	insert(0, make_Namecard("김대희", 20170031)); //본인이름,학번넣기
	insert(0, make_Namecard("이정빈", 20201503));
	insert(1, make_Namecard("한문섭", 20201504));
	insert(size(), make_Namecard("김민성", 20201496));
	insert(3, make_Namecard("김성웅", 20201506));
	insert(size(), make_Namecard("김길호", 20201494));
	insert(7, make_Namecard("양기석", 20201508));
	print_list("Insert");

	replace(size() - 1, make_Namecard("염준선", 20201493));
	replace(4, make_Namecard("한승우", 20201511));
	replace(20, make_Namecard("권호윤", 20201512));
	print_list("Replace");

	delete (3);
	delete (size() - 1);
	delete (0);
	delete (30);
	print_list("Delete");

	printf("%s is found at %d\n", "한승우", find(make_Namecard("한승우", 20201511)));
	printf("%s is found at %d\n", "석준현", find(make_Namecard("석준현", 20201515)));
	printf("%s is found at %d\n", "한문섭", find(make_Namecard("한문섭", 20201234)));
	Namecard temp = get_entry(1);
	printf("\nEntry 1: (%s, %d)\n", temp.name, temp.id);
}