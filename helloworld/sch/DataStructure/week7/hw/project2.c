#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct name_card
{
	char name[20];
	int id;
	struct name_card *link;
} Namecard;

Namecard *head = NULL;

Namecard *getNode(int pos)
{
	Namecard *p;
	for (int i = 0; i < pos; i++)
	{
		if (p == NULL)
			return NULL;

		p = p->link;
	}
	return p;
}

Namecard make_Namecard(char name[], int id)
{
	Namecard newCard;

	strcpy(newCard.name, name);
	newCard.id = id;
	newCard.link = NULL;

	return newCard;
}

void init()
{
	Namecard *p, *removed;

	for (p = head; p != NULL;)
	{
		removed = p;
		p = p->link;
		free(removed);
	}

	head = NULL;
}

int is_empty(void)
{
	return head == NULL ? 1 : 0;
}

int size(void)
{
	Namecard *p;
	int length = 0;
	for (p = head; p; length++)
	{
		p = p->link;
	}
	return length;
}

void insert(int pos, Namecard item)
{
	if (pos)
	{
		Namecard *p;
		for (p = head, pos--; pos; p = p->link)
		{
			if (!p)
			{
				printf("삽입위치 오류");
				return;
			}
			item.link = p->link;
			p->link = &item;
		}
	}
	else
	{
		item.link = head;
		head = &item;
	}
}

int main()
{
	init();
	//print_list("Init");
	insert(0, make_Namecard("김대희", 20170031)); //본인이름,학번넣기
	insert(0, make_Namecard("이정빈", 20201503));
	insert(1, make_Namecard("한문섭", 20201504));
	insert(size(), make_Namecard("김민성", 20201496));
	insert(3, make_Namecard("김성웅", 20201506));
	insert(size(), make_Namecard("김길호", 20201494));
	insert(10, make_Namecard("양기석", 20201508));
	//print_list("Insert");
	//replace(size() - 1, make_Namecard("염준선", 20201493));
	//replace(4, make_Namecard("한승우", 20201511));
	//replace(20, make_Namecard("권호윤", 20201512));
	//print_list("Replace");
	//delete (3);
	//delete (size() - 1);
	//delete (0);
	//delete (30);
	//print_list("Delete");
	//printf("%sisfoundat%d'n", "석준현", find(make_Namecard("석준현", 20201515)));
	//printf("%sisfoundat%d'n", "한문섭", find(make_Namecard("한문섭", 20201234)));
	//printf("%sisfoundat%d'n", "한승우", find(make_Namecard("한승우", 20201511)));
	////Namecard temp = get_entry(1);
	//printf("'nEntry1:(%s,%d)'n", temp.name, temp.id);
}