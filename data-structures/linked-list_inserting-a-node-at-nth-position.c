#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

struct Node *head;

void Insert(int data, int n)
{
  Node *tmp1 = malloc(sizeof(Node));
  tmp1->data = data;
  tmp1->next = NULL;
  if(n == 1)
  {
    tmp1->next = head;
    head = tmp1;
    return;
  }

  Node *tmp2 = head;
  for(int i = 0; i < n - 2; i++)
  {
    tmp2 = tmp2->next;
  }
  tmp1->next = tmp2->next;
  tmp2->next = tmp1;
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

int main()
{
  head = NULL; // Empty list

  Insert(2, 1); // List: 2
  Insert(3, 2); // List: 2, 3
  Insert(4, 1); // List: 4, 2, 3
  Insert(5, 2); // List: 4, 5, 2, 3
  Print();
}