#include <stdio.h>

typedef struct node {
  char a;
  struct node *llink;
  struct node *rlink;
} Node;

int main() {
  Node *head, *p;
  Node a = {'I', NULL, NULL};
  Node b = {'o', NULL, NULL};
  Node c = {'T', NULL, NULL};
  a.rlink = &b;

  b.llink = &a;
  b.rlink = &c;

  c.llink = &b;

  head = &a;
  for (p = head->rlink; p->rlink != NULL; p = p->rlink)
    ;
  for (; p; p = p->llink) {
    printf("%c", p->a);
  }
}