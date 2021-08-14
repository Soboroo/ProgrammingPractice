#include <stdio.h>
#include <stdlib.h>

typedef char *element;
typedef struct StackNode {
  element data;
  struct StackNode *link;
} StackNode;
typedef struct {
  StackNode *top;
} LinkedStackType;

void init_stack(LinkedStackType *s) { s->top = NULL; }

int is_empty(LinkedStackType *s) { return (s->top == NULL); }

void push(LinkedStackType *s, element item) {
  StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
  temp->data = item;
  temp->link = s->top;
  s->top = temp;
}

element
