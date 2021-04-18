#include <stdio.h>
#include <string.h>

#define MAX_IOT_LIST_SIZE 45

typedef struct
{
	char name[20];
	int id;
} Namecard;

typedef struct
{
	Namecard iot_list[MAX_IOT_LIST_SIZE];
	int length;
} Cardlist;

Namecard make_Namecard(const char *name, int id)
{
	Namecard newCard;

	strcpy(newCard.name, name);
	newCard.id = id;

	return newCard;
}

void init(Cardlist *a)
{
	a->length = 0;
}

int is_empty(Cardlist *a)
{
	return a->length ? 0 : 1;
}

int is_full(Cardlist *a)
{
	return a->length == MAX_IOT_LIST_SIZE ? 1 : 0;
}

int size(Cardlist *a)
{
	return a->length;
}

void print_list(Cardlist *a, const char *msg)
{
	printf("%s: ", msg);
	for (int i = 0; i < a->length; i++)
	{
		printf("(%s, %d) ", a->iot_list[i].name, a->iot_list[i].id);
	}
	printf("\n\n");
}

void insert(Cardlist *a, int pos, Namecard item)
{
	if (!is_full(a) && pos <= a->length && pos >= 0)
	{
		for (int i = a->length; i > pos; i--)
		{
			a->iot_list[i] = a->iot_list[i - 1];
		}
		a->iot_list[pos] = item;
		(a->length)++;
	}
	else
		printf("포화상태 오류 또는 삽입 위치 오류\n");
}

void delete (Cardlist *a, int pos)
{
	if (!is_empty(a) && pos < a->length && pos >= 0)
	{
		for (int i = pos; i < a->length - 1; i++)
		{
			a->iot_list[i] = a->iot_list[i + 1];
		}
		(a->length)--;
	}
	else
		printf("공백상태 오류 또는 삭제 위치 오류\n");
}

Namecard get_entry(Cardlist *a, int pos)
{
	if (!is_empty(a) && pos < a->length && pos >= 0)
	{
		return a->iot_list[pos];
	}
	else
	{
		printf("검색 위치 오류\n");
		return make_Namecard("NA", -1);
	}
}

int find(Cardlist *a, Namecard item)
{
	for (int i = 0; i < a->length; i++)
	{
		if (item.id == a->iot_list[i].id && !strcmp(item.name, a->iot_list[i].name))
			return i;
	}
	return -1;
}

void replace(Cardlist *a, int pos, Namecard item)
{
	if (pos <= a->length && pos >= 0)
	{
		a->iot_list[pos] = item;
	}
	else
		printf("교체 위치 오류\n");
}

void sort_list(Cardlist *a)
{
	int min, index;
	Namecard temp;
	for (int i = 0; i < a->length; i++)
	{
		min = a->iot_list[i].id;
		index = i;
		for (int j = i + 1; j < a->length; j++)
		{
			if (min > a->iot_list[j].id)
			{
				min = a->iot_list[j].id;
				index = j;
			}
		}
		temp = a->iot_list[i];
		a->iot_list[i] = a->iot_list[index];
		a->iot_list[index] = temp;
	}
}

int main()
{
	Cardlist a;
	init(&a);
	print_list(&a, "Init");
	insert(&a, 0, make_Namecard("우영윤", 20201517));
	insert(&a, 0, make_Namecard("이정빈", 20201503));
	insert(&a, 1, make_Namecard("한문섭", 20201504));
	insert(&a, size(&a), make_Namecard("김민성", 20201496));
	insert(&a, 3, make_Namecard("김성웅", 20201506));
	insert(&a, size(&a), make_Namecard("김길호", 20201494));
	insert(&a, 10, make_Namecard("양기석", 20201508));
	print_list(&a, "Insert");

	replace(&a, size(&a) - 1, make_Namecard("염준선", 20201493));
	replace(&a, 4, make_Namecard("한승우", 20201511));
	replace(&a, 20, make_Namecard("권호윤", 20201512));
	print_list(&a, "Replace");

	delete (&a, 3);
	delete (&a, size(&a) - 1);
	delete (&a, 0);
	delete (&a, 30);
	print_list(&a, "Delete");

	sort_list(&a);
	print_list(&a, "Sort");

	printf("%s is found at %d\n", "한승우", find(&a, make_Namecard("한승우", 20201511)));
	printf("%s is found at %d\n", "석준현", find(&a, make_Namecard("석준현", 20201515)));
	printf("%s is found at %d\n", "한문섭", find(&a, make_Namecard("한문섭", 20201234)));
}