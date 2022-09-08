#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

struct Node *head;

void Insert(int data, int n);
void Print();

int main()
{
  head = NULL;

  Insert(2, 1); // 2
  Insert(3, 2); // 2, 3
  Insert(4 ,1); // 4, 2, 3
  Insert(5, 2); // 4, 5, 2, 3

  Print();
}

void Insert(int data, int n)
{
  Node *tmp = malloc(sizeof(Node));
  tmp->data = data;
  tmp->next = NULL;
  if (n == 1)
  {
    tmp->next = head;
    head = tmp;
    return;
  }

  Node *tmp1 = head;
  for(int i = 0; i < n - 2; i++)
  {
    tmp1 = tmp1->next;
  }
  tmp->next = tmp1->next;
  tmp1->next = tmp;
}

void Print()
{
  Node *tmp = head;
  while(tmp != NULL)
  {
    printf("%d ", tmp->data);
    tmp = tmp->next;
  }
  printf("\n");
}