#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct Node {
  int Data;
  struct Node *Next;
} Node;

Node *Enqueue(Node *Rear) {
  Node *NewNode = (Node *)malloc(sizeof(Node));
  printf("데이터 입력 : ");
  scanf("%d", &NewNode->Data);
  NewNode->Next = NULL;
  if (Rear != NULL)
    Rear->Next = NewNode;
  return NewNode;
}

Node *Dequeue(Node *Front) {
  if (Front == NULL) {
    printf("삭제할 데이터가 없습니다. ");
    return NULL;
  }

  Node *DeleteNode = Front;
  Front = Front->Next;
  free(DeleteNode);
  return Front;
}

int main() {
  Node *Rear = NULL;
  Node *Front = NULL;
  while (1) {
    // system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("====Queue System====\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Exit\n");
    printf("====================\n");
    printf("입력 :");
    int Select;
    scanf("%d", &Select);
    switch (Select) {
    case 1:
      Rear = Enqueue(Rear);
      if (Front == NULL)
        Front = Rear;
      printf("Front : %d Rear : %d\n", Front->Data, Rear->Data);
      break;
    case 2:
      if (Front)
        printf("Front : %d Rear : %d\n", Front->Data, Rear->Data);
      Front = Dequeue(Front);
      if (Front == NULL)
        Rear = NULL;
      break;
    case 3:
      while (Front != NULL && Rear != NULL)
        Dequeue(Front);
      return 0;
    }
  }
}