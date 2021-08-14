#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct LinkedQueue {
  element data;
  struct LinkedQueue *link;
} LinkedQueue;
typedef struct LinkedQueuetype {
  LinkedQueue *front;
  LinkedQueue *rear;
} LinkedQueuetype;

void init_queue(LinkedQueuetype *s) { s->front = s->rear = NULL; }

int is_empty(LinkedQueuetype *s) { return s->front == NULL && s->rear == NULL; }

void enqueue(LinkedQueuetype *s, element data) {
  LinkedQueue *temp = (LinkedQueue *)malloc(sizeof(LinkedQueue));
  temp->data = data;
  temp->link = NULL;
  if (is_empty(s)) {
    s->front = s->rear = temp;
  } else {
    s->rear->link = temp;
    s->rear = temp;
  }
}

element dequeue(LinkedQueuetype *s) {
  if (is_empty(s)) {
    printf("empty\n");
    return -1;
  }
  LinkedQueue *delete = s->front;
  s->front = s->front->link;
  element result = delete->data;
  free(delete);
  if (s->front == NULL)
    s->rear = NULL;
  return result;
}

void queue_print(LinkedQueuetype *s) {
  for (LinkedQueue *p = s->front; p; p = p->link) {
    printf("[%d] ", p->data);
  }
  printf("\n");
}

int main() {
  LinkedQueuetype s;
  init_queue(&s);
  enqueue(&s, 5);
  enqueue(&s, 2);
  enqueue(&s, 1);
  queue_print(&s);
  dequeue(&s);
  dequeue(&s);
  queue_print(&s);
  dequeue(&s);
  printf("%x, %x\n", s.front, s.rear);
  enqueue(&s, 5);
  enqueue(&s, 2);
  enqueue(&s, 1);
  queue_print(&s);
  dequeue(&s);
  dequeue(&s);
  queue_print(&s);
  dequeue(&s);
  printf("%x, %x\n", s.front, s.rear);
}